Stack - FILO
Queue - FIFO

We want to process item by priority

Priority Queue is an ADT, each item has an associated priority

insert
- insert an item with an associated priority

delete
- delete the item with the highest priority

peek
- get the item with the highest priority without deleting it

is empty
- check if priority queue is empty

How to implement?
- unordered array
Insert - Delete - Peek - isEmpty: 1, n, n, 1
- ordered array
Insert - Delete - Peek - isEmpty: n, 1, 1, 1
- linked list (unordered/ordered)
unordered: Insert - Delete - Peek - isEmpty: 1, n, n, 1
ordered: Insert - Delete - Peek - isEmpty: n, 1, 1, 1

A heap is a tree-based data structure which satisfies the heap property
heap property specifies how values in the heap should oredered and depends on the kind of heap

in a max heap, value in each node must be greater or equal to values in its children
in a min heap, value in each node must be less or equal to values in its children

binary heap
a heap that takes form of a binary tree and satisfies
1. heap property
2. completeness property
- all levels of the tree must be fully filled and the last level must be filled from left to right

level is always floor(log2(n))+1

binary heaps uses array
For an item at index i:
- Its left child is located at index 2*i
- Its right child is located at index 2*+1
- its parent is located at index floor(i/2)
