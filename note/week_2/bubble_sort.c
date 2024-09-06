void bubbleSort(Item items[], int lo, int hi){
  for (int i = hi; i > lo; i--){ // in case we're not sorting the entire array (just some part)
    bool swapped = false;
    for (int j = lo; j < i; j++){ // multiple pass
      if(items[j] > items[j+1]){
        swap(items, j, j+1);
        swapped = true;
      }
    }
    if(!swapped) break;
  }
}
