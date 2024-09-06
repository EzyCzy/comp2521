void selectionSort (Item items[], int lo, int hi){

  //iterates through all elements except the last one
  for(int i = lo; i < hi; i++){

    //keep this position
    int min = i; // 

    // check from i+1 th position to the last
    for(int j = i + 1; j <= hi; j++){

      // if the jth pointed element is smaller than the current minimum, choose this to swap
      if(items[j] < items[min]){
        min = j;
      }
    }
    swap(items, i, min);
  }
}

