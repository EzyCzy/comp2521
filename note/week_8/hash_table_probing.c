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

void HashTableInsert(HashTable table, int key, int value) {
	if (table->numItems >= table->numSlots * MAX_LOAD_FACTOR) {
		resize(table);
	}

  int i = hash(key, table->numSlots);

  for (int j = 0; j < table->numSlots; j++) {
    if (table->slots[i].empty) {
      table->slots[i].key = key;
      table->slots[i].value = value;
      table->slots[i].empty = false;
      table->numItems++;
      return;
    }

    if (table->slots[i].key == key) {
      table->slots[i].value = value;
      return;
    }
    i = (i + 1) % table->numSlots;
  }
}

/*
Backshift - remove and reinserts all item between the deleted item and the next empty slot
*/
void HashTableDelete(HashTable table, int key) {
  if(!HashTableContains(table, key)) return;

  int i = hash(key, table->numSlots);
  int prev = i;
  table->slots[i++].empty = true;
  table->numItems--;
  for (int j = 0; j < table->numSlots - 1; j++) {
    if (!table->slots[i].empty && 
        hash(key, table->numSlots) == hash(table->slots[i].key, table->numSlots)) {
      table->slots[prev].key = table->slots[i].key;
      table->slots[prev].value = table->slots[i].value;
      table->slots[i].empty = true;
      table->slots[prev].empty = false;
    }

    i = (i + 1) % table->numSlots;
  }
}

/*
Tombstone - replace the deletd item a deleted marker, treated as empty during insertion and occupied during lookup
*/
