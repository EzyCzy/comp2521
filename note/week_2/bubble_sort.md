Method:
- infinite passes from left to right
- on each pass, swap any out-of-order-adjacent pairs
- Elements "bubble up" until they meet a larger element
- Stop if the are no swaps during a pass (array is sorted)

if sorted O(n) no comparison

Worst case

C = n(n-1)/2
S = n(n-1)/2
O(n^2)
