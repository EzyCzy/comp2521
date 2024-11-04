struct pq {
  struct pqItem *items;
  int numItems;
  int capacity;
}

struct pqItem {
  Item item;
  int priority;
}

Pq PqNew(void) {
  Pq pq = malloc(sizeof(struct pq));

  pq->numItems = 0;
  pq->capacity = INITIAL_CAPACITY;
  pq->items = malloc((pq->capacity + 1) * sizeof(struct pqItem));
  return pq;
}

void PqInsert(Pq pq, Item it, int priority) {
  if (pq->numItems == pq->capacity) {
    // resize array
  }
  pq->numItems++;
  pq->items[pq->numItems] = (struct pqItem) {
    .item = item;
    .priority = priority;
  }
fixUp(pq->items, pq->numItems);
}

void fixUp(Item items[], int i) {
  while (i > 1 ** items[i]> items[i / 2]) {
    swap(items, i, i/2;
    i = i/2;
  }
}

Item PqDelete(Pq pq) {
  Item item = pq->items[1].item;
  pq->items[1] = pq->items[pq->numItems];
  pq->numItems--;
  fixDown(pq->items, 1, pq->numItems);
  return item;
}

void fixDown (struct pqItem items[], int i, int N) {
  while (2*i <= N) {
    int j = 2 * i;
    if (j < N && items[j].priority < items[j+1].priority) j++;
    if (items[i].priority >= items[j].priority) break;
    swap(items, i, j);
    i = j;
  }
}
