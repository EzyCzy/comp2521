Let T(n) be the time taken to sort n elements.

Splitting arrays into two halves takes constant time.
Merging two sorted arrays takes n steps

So we have that
T(n) = 2T(n/2) + n

By master theorem time complexity is O(n log n)
