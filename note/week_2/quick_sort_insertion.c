void quickSort(Item items[], int lo, int hi){
  if(hi - lo < 5){
    insertionSort(items, lo, hi);
    return;
  }

  medianOfThree(items, lo, hi);
  int pivotIndex = partition(items, lo, hi);
  quickSort(items, lo, pivotIndex-1);
  quickSort(items, pivotIndex + 1, hi);
  
}

