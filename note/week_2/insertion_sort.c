void insertionSort(Item items[], int lo, int hi){
  for (int i = lo + 1; i <= hi; i++){
    Item item = items[i];
    int j = i;
    for(; j > lo && item < items[j-1]; j--){
      items[j] = items[j-1];
    }
    items[j] = item;
  }
}
