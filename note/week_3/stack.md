Operations
push O(1)
- adds an item to the top of the stack
- if array is full, double the size, still O(1) avg
pop O(1)
- remove the item at the top of the stack
size
- number of items in stack
peep
- topmost item of the stack without removing it

Last In, First Out (LIFO)

Implementation
- Array
  - push O(1), if full double the size, still O(1) avg
  - pop O(1)
- Linkedlist
  - push insert at beginning of list O(1)
  - pop remove at beginning of the list O(1)
