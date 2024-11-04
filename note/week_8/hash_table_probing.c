struct hashTable {
  struct node **slots;
  int numSlots;
  int numItems;
}

struct slot {
  int key;
  int value;
  bool empty;
}

HashTable HashTableNew(void) {
  HashTable ht = malloc(sizeof(*ht));
  ht->slots = malloc(INITIAL_CAPACITY * sizeof(struct slot));
  for (int i = 0; i < ht->numSlots; i++) {
    ht->slots[i].empty = true;
  }

  ht->numSlots = INITIAL_CAPACITY;
  ht->numItems = 0;
  return ht;
}

int HashTableGet(HashTable ht, int key) {
  int i = hash(key, ht->numSlots);

  for (int j = 0; j < ht->numSlots; j++) {
    if (ht->slots[i].empty) break;
    if (ht->slots[i].key == key) {
      return ht->slots[i].value;
    }

    i = (i + 1) % ht->numSlots;
  }

  error;
}

/*
Backshift - remove and reinserts all item between the deleted item and the next empty slot
*/

/*
Tombstone - replace the deletd item a deleted marker, treated as empty during insertion and occupied during lookup
*/
