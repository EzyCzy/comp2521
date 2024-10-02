Insertion (post order)
Method: 
- Insert item recursively
- Check balance at each node along the insertion path in reverse
- from bottom to top
- Fix imbalances as they are found
- Return root of updated tree


Deletion (post order)
- Delete item recursively
- Check balance at each node along the deletion path in reverse
- from bottom to top
- Fix imbalances as they are found

Maintaining Height Data
- When a node is inserted (all ancestors may be affected)
- When a rotation is performed (original and new root may be affected)
