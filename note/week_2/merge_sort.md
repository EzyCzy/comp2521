Method 
Partition array into chuncks of size one
Start combinining the chuncks and and sort newly chuncks
Repeat

How to split array?

Calculate midpoint:
mid = (lo + hi)/2

Recursively sort between lo and mid 
and mid+1 hi

Merge two sorted subarrays?
We merge the subarrays into a temporary array
Keep track of the smallest element that has not been merged in each subarray
Copy the smaller of the two elements into the temporary array
if same then take from left subarray (stability)
Repeat until all elements have been merged
Copy the temporary array back to the original array

O(n) to merge two sorted subarrays

Total O(nlogn)

Stable
adaptive
not in-place
