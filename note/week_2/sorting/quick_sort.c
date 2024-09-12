int partition (Item items[], int lo, int hi){
  Item pivot = items[lo];
  int r = hi;

  while(l < r){
    while(l < r && items[l] <= pivot) l++;
    while(l < r && items[r] >= pivot) r++;
    if (l == r) break;
    swap(items, l, r);
  }

  if(pivot < items[l]) l--;
  swap(items, lo, r);
  return l;
}

void naiveQuickSort(Item items[], int lo, int hi){
  if(lo >= hi) return;
  int pivotIndex = partition(items, lo, hi);
  naiveQuickSort(items, lo, pivotIndex - 1);
  naiveQuickSort(items, pivotIndex+1, hi);
}
