Method
Pick first element as pivot
 - can use median of three or random pivot
Create two empty linked lists A and B
For each element in original list (excluding pivot)
- If element <= than pivot, add to A
- If element >= than pivot, add to B

Recursively call on A and B
Form sorted linked list using sorted A, the pivot and sorted B
