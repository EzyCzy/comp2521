strcuture, height (performance) depends on the order of insertion

Best case height is log n
Worst case height is n

Size balanced
abs(size(l) - size(r)) <= 1
Height balanced
abs(height(l) - height(r)) <= 1
where l is the left subtree and r is the right subtree

Rotation
left 
right

Partition
- rearrange tree around a specified node by rotating it to the root of the tree (index i becomes root)

Method:
- Find element with index i
- Perform rotations to left it to the root
- If it the left child of its parent perform right rotation at its parent
- left righ child of parent then perform left roation at its parent
- repeat until it is at the root of the tree

size() can be expensive, so we store the size of all the nodes subtree

Global rebalancing
Idea: completely rebalance the whole tree
Method: Lift the median node to the root by partitioning on size(t)/2
then rebalance both subtree (recursively)

Worst Case O(n log n)
log n partition, n rotations

Problems: 
If we want to insert more items: 
- rebalance on every insertion
- rebalance every k insertions
- rebalance when imbalance exceeds threshold

- more costly insertions
- degraded performance for periods of time
  
Periodic rebalancing
If tree is not modified very often
otherwise will be slow occasionally due to rebalancing
performance will gradually degrade until next rebalance

Global vs local rebalancing
Global:
perfectly balanced tree - at cost
Local:
small incremental operations and improve the overall balance of the tree - not perfect

Root Insertion
Idea:
- rotations change the structure of a tree
- if we perform some rotations very time we insert, that may restructure the tree randomly enough such that it is more balanced
- one systematic way to perform is insert new values at the root

Method: insert new value at left then rotate the new node to the root

Analysis:
- Same time complexity as normal insertion: O(h)
 Tree is morelikely to be balanced but no guarantee
- Root insertion ensures recently inserted items are close to the root
  (if more recent things are more likely to be search)
- Major problem: ascending order and descending order data is still a worst case of root insertion.

Random insertion creates similar results to inserting items in random order
Tree likely to be balanced
Balancing method are either inefficient or dont guarantee a balanced tree
