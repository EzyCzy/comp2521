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

Left left (Left and the left of this child is heavy)
- Rationale: Since all the imbalance is at left, rotating at the root to the right once is sufficient
Left right (Left and the right of this child is heavy)
- Rationale: We want a left-left situation, so we do this by rotating left on left right
Right right (Right and the right of this child is heavy)
- Rationale: Since all the imbalance is at right, rotating at the root to the left once is sufficient
Right left (Right and the left of this child is heavy)
- Rationale: We want a right-right situtation, so we do this by rotating to right on right left

Maintaining Height Data
- When a node is inserted (all ancestors may be affected)
- When a rotation is performed (original and new root may be affected)
