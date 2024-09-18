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

Insertion, O(h):
bstInsert(t,v)
Given a BST t and a value v, insert v into the BST. and return the root of the updated tree

Method:
Start at node
if value is less than go left child and value is more then go right child
repeat until no more child, create node and attack to current node

Search, O(h):
bstSearch(t,v)
Given a BST t and a value v,
return true if v is in the BST and false otherwise

Method:
Start at node
if value is less than go left child and value is more then go right child
repeat until no more child (no result) or equals to value (found)

Traversal, O(n) number of nodes:
given a BST, visit every node of the tree

Four ways to traverse a binary tree:
1) Pre-order (NLR): 
   visit root, traverse left subtree, traverse right subtree
   - Uses: reconstructing tree
2) In-order (LNR):
   traverse left subtree, visit root, then traverse right subtree
   - Uses: traversing a BST in ascending order
3) Post-order (LRN):
   traverse left subtree, traverse right subtree, visit root
   - Useful for evaluating an expression tree
   - Useful for freeing a tree
4) Level-order:
   visit root, its children, then their children and so on
   - Useful for printing a tree

Joining O(h2), height of t2
bstJoin(t1,t2)
Given two BSTs t1 and t2
where max(t1) < min(t2)
return a BST containing all items from t1 and t2

Method: 
Find the minimum node min in t2
Replace min by its right subtree (if it exists)
Elevate min to be the new root of t1 and t2

Deletion O(n) number of nodes
bstDelete(t,v)
Given a BST t and a value v, delete v from the BST and return the root of the updated BST

Method:
Search for t then delete
1. if t is leaf return nULL
2. if t has one subtree
   replace t with the subtree
4. if t has two subtrees
   join two subtrees
