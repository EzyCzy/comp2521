void randomisedQuickSort(Item items[], int lo, int hi){
  if (lo >= hi) return;
  swap(items, lo, randint(lo,hi));
  int pivotIndex = partition(items, lo, hi);
  randomisedQuickSort(items, lo, pivotIndex-1);
  randomisedQuickSort(items, pivotIndex + 1, hi);
}

int randint (int lo, int hi){
  int i = rand() % (hi - lo + 1);
  return lo + i;
}
