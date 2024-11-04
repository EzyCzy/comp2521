struct hashTable {
  struct node **slots;
  int numSlots;
  int numItems;
}

struct node {
  int key;
  int value;
  struct node *next;
}

HashTable HashTableNew(void) {
  HashTable ht = malloc(sizeof(*ht);
  ht->slots = calloc(INITIAL_NUM_SLOTS, sizeof(struct node *));
  ht->numSlots = INITIAL_NUM_SLOTS;
  ht->numItems = 0;
  return ht;
}

void HashTableInsert(HasTable ht, int ket, int value) {
  if(load factor exceeds threshold) {
    resize hash table
  }
  int i = hash(key, ht->numSlots);
  ht->slots[i] = doInsert(ht, ht->slots[i], key, value);
}

struct node *doInsert(HashTable ht, struct node *list, int key, int value) {
  if (list == NULL) {
    ht->numItems++;
    return newNode(key,Value);
  } else if (list->key == key) {
    list->value = value;
  } else {
    list->Next = doInsert(ht, list->next, key, value);
  }
}

bool HashTableContains(HashTable ht, int key) {
  int i = hash(key, ht->numSlots);

  struct node *curr = ht->slots[i];
  while (curr != NULL) {
    if (curr->key == key) {
      return true;
    }
    curr = curr->next;
  }
  return false;
}

int HashTableGet(HashTable ht, int key) {
  int i = hash(key, ht->numSlots);

  struct node *curr = ht->slots[i];
  while (curr != NULL) {
    if (curr->key == key) {
      return curr->value;
    }
    curr = curr->next;
  }
  error;
}

void HashTableDelete(HashTable ht, int key) {
  int i = hash(key, ht->numSlots);
  ht->slots[i] = doDelete(ht, ht->slots[i], key);
}

struct node *doDelete(HashTable ht, struct node *list, int key) {
  if (list == NULL) {
    return NULL;
  } else if (list->key == key) {
    struct node *newHead = list->next;
    free(list);
    ht->numItems--;
    return newHead;
  } else {
    list->next = doDelete(ht, list->next, key);
    return list;
  }
}
