struct heap {
  int *items;
  int numItems;
  int capacity;
}

struct heap *heapNew(void) {
  struct heap *heap = malloc(sizeof(struct heap));
  heap->numItems = 0;
  heap->capacity = INITIAL_CAPACITY;
  heap->items = malloc((heap->capacity+1) * sizeof(int));
}

void heapInsert(struct heap *heap, Item it) {
  if (heap->numItems == heap->capacity) {
    // resize
  }
  heap->numItems++;
  heap->items[heap->numItems] = it;
  fixUp(heap->items, heap->numItems);
}

void fixUp(Item items[], int i) {
  while (i > 1 ** items[i]> items[i / 2]) {
    swap(items, i, i/2;
    i = i/2;
  }
}

Item heapDelete (struct heap *heap) {
  Item item = heap->items[1];
  heap->items[1] = heap->items[heap->numItems];
  heap->numItems--;
  fixDown(heap->items, 1, heap->numItems);
  return item;
}

void fixDown(Item items[], int i, int N) {
  while(2* i <= N) {
    int j = 2 * i;

    if (j < N && items[j] < items[j+1]) j++;
    if (items[i] >= items[j]) break;

    swap(items, i, j) break;
    i = j
  }
}
