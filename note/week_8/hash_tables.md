map keys to values

associative array - ADT - stores key-value pairs

insert - insert a key-value pair
lookup - give a key, return its associated value
delete - given a key, delete its key-value pair

Implementation:
- unordered array
insert - O(n)
lookup - O(n)
delete - O(n)
- ordered array
insert - O(n)
lookip - O(log n)
delete - O(n)
- balanced binary search tree
insert - O(log n)
lookup - O(log n)
delete - O(log n)
- hash table: uses array to store key-value pairs and a hash function that, give
a key, computes an index into the array
average O(1) for insertion, lookup and deletion

![image](https://github.com/user-attachments/assets/c383b547-3ecb-4779-8bce-37747671c9f4)

A hash function:
- Maps a key to an index in range [0, N-1]
- Cheap to compute
- deterministic (return same index)
- ideally, maps keys uniformly over the range of indices

basic hash
![image](https://github.com/user-attachments/assets/48397938-09ac-47dd-b57a-fbf1c922ca01)
int and string
![image](https://github.com/user-attachments/assets/06063002-c101-4b4e-aafd-59aa30b376ef)
More robust
![image](https://github.com/user-attachments/assets/daa03fe9-0bd8-4f76-92e7-bc5e3ac78ce3)


Real hash function
![image](https://github.com/user-attachments/assets/37a1e56b-dd6b-44ba-902a-9e83616646cc)

Collision occur when a key already have value but we're attemping to insert another value
hash table must resolve collisions

Collision resolution methods:
- Seperate chaining
allows listing in an index

Cost analysis:
- N array slots, M items
- Average list length L = M/N
- best case, evenly distributed O(M/N) all operation
- worse case, everything in one list O(M) all operation

Average costs
- Good hash and alpha <= 1, cost is O(1)
- good hash and alpha > 1, cost is O(M/N), should resize when alpha approximately 1

- Linear probing
check next index until empty slot is found
Problems:
  - items tend to cluster together into long runs
  - insertion must travel to the end of a run
  - lookip of nonexistent keys must travel to the end of a run
causes:
  - longer a run becomes sthe more likely it is to accrue additional items
  - two long run can be connceted into an even longer run due to the insertion of an item between them
 
Cost analysis
![image](https://github.com/user-attachments/assets/c960ddac-c854-4c77-9290-86a7c7c5a5c0)

- Double hashing
instead of checking incrementinly use secondary hash, improves on linear probing

- increment which is based on a secondary hash of the key
- ensure all slots will be visited (increment relatively prime to N)
- tends to reduce clustering

cost: 
![image](https://github.com/user-attachments/assets/bf8aa97f-2e93-483b-b770-0e3d47d23b15)

Important stats: load factor (alpha)
- Ratio of items to slots, alpha = M/N

Summary
Seperate chaining: easy to implement, allows alpha > 1
Linear probing: Fast if alpha <= 1, complex deletion
Double hashing: Avoids clusting issues with linear probing
O(1) on avg
assuming
- good hash function
- tabl is appropriately resized if load factor exceeds threshold

initial size
Ideas:
- variable for users to decide

resize a hash table
- hash function depends on the number of slots
- all items must be reinserted
- double number of slots every resizing
- lookup an item we dont know exist
  - Once call to HashTableContains to check existence of key
  - Once call to HashTableGet to get the value

idea: provide another function that allows user to specify a default value to return if key does not exist
