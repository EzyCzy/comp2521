Binary tree is where each node has atmost two child nodes
binary search tree is an ordered binary tree (left is lesser, right is greater)

Used for large amount of data

Previously we've done
- Ordered Array
  - Search O(log n) binary search
  - Insert O(n) shifting
- Ordered linked list
  - Search O(n)
  - Insert O(1) no shifting

Binary search trees maintains O(log n) search and O(1) insertion

root node - node with no parent node
leaf node - node with no child nodes
internal node - node that has atleast one child node

Height of a tree (max path length from the node to a leaf)
- height of empty tree is -1

For a tree with n nodes, max height is n-1 and min height is floor(log_2 n)

Balanced if has minimal height
Degenerate if has maximal height

Key operations:
- Insert
- Search
- Traversal
- Join
- Delete

Insertion:
bstInsert(t,v)
Given a BST t and a value v, insert v into the BST. and return the root of the updated tree

Method:
Start at node
if value is less than go left child and value is more then go right child
repeat until no more child, create node and attack to current node



