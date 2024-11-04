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
- Linear probing
check next index until empty slot is found
- Double hashing
instead of checking incrementinly use secondary hash

Important stats: load factor (alpha)
- Ratio of items to slots, alpha = M/N

