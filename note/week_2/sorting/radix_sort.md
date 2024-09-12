Comparison sorts requires at least nlogn comparisons, small-omega(n log n)
for some constant k, k*(n log n)

If we have n items, there are n! permutations

If we perform k comparisons, that creates up to 2^k groups

so given n items, we must perform enough comparisons k such that 2^k >= n!

so log_2 2^k >= log_2 n!
k >= log_2 n!

Using stirling's approximation, we get
k >= n*log_2 n - n*log_2 e + O(log_2 n)

removing lower order terms gives
k = small-omega(n*log_2 n)

must have same length

Method:
Perform stable sort on k_m
Perform stable sort on k_(m-1)
...
Perform stable sort on k_1

stable sort takes O(n + R)
so m stable sorts is O(m*n) given that R is small. Radix sort performs better than comparison-based sorting when keys is short and array are large

Stable
Not adaptive
Not in place

others non-comparison-based sorts
Bucket sort
MSD radix sort
Key-indexed counting sort
