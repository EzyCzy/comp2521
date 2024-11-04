Many applications require searching through a set of strings

How to implement?
AVL: O(log n) at worst

HashTable: O(1) average, O(n) at worst

A trie
- is a tree data structure
- used to represent a set of strings
- support string matching queries in O(M) time, m length of string

![image](https://github.com/user-attachments/assets/b8b72194-9cf6-46ba-9c4d-8e048c24dc5f)

Import features of tries:
- Each link represents an individual character
- A key is represented by a path in the trie
- Each node can be tagged as a finishing node
- Each node may contain data associated with key
- unlike search tree, the nodes in a trie do not store theire associated keys

Insertion:
1. Start at root
2. For each char c in key (from left to right)
  - if there is no child node corresponding to c, create one
  - descend into the child node corresponding to c
3. Mark the resulting node as a finishing node and insert data (if any)

Search:
1. Start at root
2. For each characyer c in the key (from left to right)
  - if there is no child node corresponding to c, return false
  - descend into the child node corresponding to c
3. If the resulting node is a finishing node, then return true otherwise return false

Deletion:
1. Find node corresponding to given key and mark it as non finishing node
2. branches that dont contain any finishing nodes
3. dead branches waste memory

Process:
1. Find node corresponding to given key, if node doesnt exist do nothing
2. Mark node as non finishing node
3. While current node is not a finishing node and has no child nodes:
   - delete current node and move up to parent
   - recursively

Cost analysis
O(m) for insertion, search and deletion

Space analysis
O(nR) space
n total number of charcs
R is the size of underlying alphabet

Memory inefficient
- use singly linked list to store child nodes
- alphabet reduction, break char into smaller chunks and these chunks as the characters

Linked list of children
![image](https://github.com/user-attachments/assets/e14f5f8d-d75c-4e0d-8b9d-c86cbc8eecbb)

left-child right-sibling 
![image](https://github.com/user-attachments/assets/6220a7ba-04da-4e14-b7f5-1e8443cdf223)
Uses much less space
expense of running time, traverse up to ALPHABET_SIZE before reaching desired child

Alphabet reduction
![image](https://github.com/user-attachments/assets/266bf17a-fe8b-4f53-900c-ecc050d86233)
![image](https://github.com/user-attachments/assets/8dcdd47f-14f8-495c-a33d-d620da4b335b)
Uses much lesss space
- expense of running time, path to each key is twice as long - lookups need to visited twice as many nodes

Compressed trie
![image](https://github.com/user-attachments/assets/4fbf1213-d3af-4f69-9279-12e7cc726a7d)

given a document, preprocess it by storing all words in a trie
and for each word, store the location of all its occurrences

when user searches for a word, can query the trie instead of scanning entire document


