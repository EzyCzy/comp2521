void medianOfThreeQuickSort(Item items[], int lo, int hi){
  if (lo >= hi) return;
  medianOfThree(items, lo, hi);
  int pivotIndex = partition(items, lo, hi);
  medianOfThreeQuickSort(items, lo, pivotIndex - 1);
  medianOfThreeQuickSort(items, pivotIndex + 1, hi);
}

void medianOfThree(Item a[], int lo, int hi){
  int mid = (lo + hi) / 2;
  if(a[mid] > a[lo]) swap(a, mid, lo);
  if(a[lo] > a[hi]) swap(a, lo, hi);
  if(a[mid] > a[lo]) swap(a, mid, lo);
  // now we have a[mid] <= a[lo] <= a[hi];
}
