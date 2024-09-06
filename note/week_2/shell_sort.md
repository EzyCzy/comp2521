Idea: 
An array is h-sorted if taking every h-th element yields a sorted array
An h-sorted array is made of n/h sorted arrays
Shell sort: h-sort the array for progressively smaller h, ending with h = 1

Efficiency of shell sort depends on the h-sequence
Effective h-sequences have been determined empirically

if h_(i+1) = 3h_i + 1
O(n^3/2)

Not stable
Not adaptive
In-place
