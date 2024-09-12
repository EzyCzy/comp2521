void merge(Item items[], int lo, int mid, int hi){
  Item *tmp = malloc((hi-lo+1)*sizeof(Item));
  int i = lo, j = mid + 1, k = 0;

  while(i <= mid && j <= hi){
    if(items[i] <= items[j]){
      temp[k++] = items[i++];
    } else {
      temp[k++] = items[j++];
    }
  }

  while (i <= mid) tmp[k++] = items[i++];
  while (j <= hi) temp[k++] = items[j++];

  for(int i = lo, k = 0; i <= hi; i++, k++){
    items[i] = tmp[k];
  }
}

void mergeSort(Item items[], int lo, int hi){
  if(lo >= hi) return;
  int mid = (lo + hi)/2
  mergeSort(items, lo, mid);
  mergeSort(items, mid+1, hi);
  merge(items, lo, mid, hi)
}
