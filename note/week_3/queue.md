First In, First Out (FIFO)

Operations:
- Enqueue
  - add a new item to the end of the queue
- Dequeue
  - remova the item at the front of the queue
- size
  - return the number of items in the queue
- peek
  - get the frontmost item of the queue, without removing it
 
Implementation:
- Array
  - Dynamically allocate an array with an initial capacity
  - Maintain index of the infront of the queue O(1)
  - Maintain a counter of the numbre of items in the queue O(1)

(dequeu)  O > O > O > O (queue)
- Linkedlist (easier)
  - Enqueu: Insert at the end O(1)
  - Dequeu: Remove at the begin (add a pointer to the back) O(1)
