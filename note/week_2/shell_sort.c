void shellSort(Item items[], int lo, int hi){

  int size = hi - lo + 1;

  int h;

  for(h = 1; h <= (size - 1) / 9; h = (3*h)+1);
  for(; h > 0; h /= 3){
    for(int i = lo+h; i <= hi;i++){
      Item item = items[i];
      int j = i;
      for(; j >= lo + h && item < items[j-h]; j-=h){
        items[j] = items[j-h];
      }
      items[j] = item;
    }
  }
}
