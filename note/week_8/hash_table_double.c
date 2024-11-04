struct hashTable {
  struct slot *slots;
  int numSlots;
  int numItems;
  int hash2Mod;
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
  ht->hash2Mod = findSuitableMod(INITIAL_CAPACITY);
  return ht;
}

void HashTableInsert(HastTable ht, int key, int value) {
  if (load factor exceeds threshold) {
    resize
  }

  int i = hash(key, ht->numSlots);
  int inc = hash2(key, ht->hash2Mod);

  for (int j = 0; j < ht->numSlots; j++) {
    if (ht->slots[i].empty) {
      ht->slots[i].key = key;
      ht->slots[i].value = value;
      ht->slots[i].empty = false;
      ht->numItems++;
      return;
    }
    if (ht->slots[i].key == key) {
      ht->slots[i].value = value;
      return;
    }
    i = (i + inc) % ht->numSlots;
  }
}
