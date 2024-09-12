/*

radixSort(A):
  Input: array A of keys where each key consists of m symbols from an "alphabet"

  initialise R buckets // on for each sumbol

  for i from m down to 1:
    empty all buckets
    for each key in A:
      append key to bucket key[i]

    clear A
    for each bucket (in order):
      for each key in bucket: 
        append key to A
*/
