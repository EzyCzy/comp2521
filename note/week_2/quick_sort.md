Method: 
Choose a pivot
Rearrange (partition) the array so that 
- All elements to the left of the pivot <= than the pivot
- All elemnets to the right of the pivot >= than the pivot
Recursively sort each of the partitions

How to partition an array
Assume the pivot is stored at index lo
Create index l to start of array (lo + 1)
Create index r to end of array (hi)
Until l and r meet
- Increment l until a[l] is greater than pivot
- Decrement r until a[r] is less than pivot
- Swap items at indices l and r
Swap the pivot with index l or l - 1 (depending on the value of pivot and arr[l] and arr[l-1])

n comparison and n/2 swaps
partitioning is O(n)

Base case O(nlogn)
Choice of pivot gives two equal sized partitions
Same happens at every recursive call
result in log n recursive levels
Each level requires approximate n comparitions

Worst case O(n^2)
Always lowest/highest value for pivot
n recursive calls
n - 1 comparions from each level

Unstable
Non-adaptive
In-place
Stack depth O(n) worst O(log n) average
