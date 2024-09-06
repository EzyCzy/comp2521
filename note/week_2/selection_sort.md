Algorithm: 
1. Find smallest element, swap with the first element
2. Find second-smallest element, swap with the second element
3. ...
4. Find second-largest element, swap with second-last element

Each iteration improves the "sortness" of sorted array by one index

Cost Analysis:

First iteration n-1 comparisons, 1 swap
Second iteration n-2 comparisons, 1 swap
...
Final, 1 comparison, 1 swap

C = n-1 + n-2 + ... + 1 = (n-1)(n)/2
S = n-1

O(n^2)

Not stable
Not adaptive
In-place
