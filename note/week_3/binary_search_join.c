/*
bstJoin(t1,t2):
  Input: trees, t1, t2
  Output: t1 and t2 joined together

if t1 is empty:
  return t2
else if t2 is empty:
  return t1
else: 
  curr = t2
  parent = NULL

  while curr->left != NULL:
    parent = curr
    curr = curr->left

  if parent != NULL:
    parent->left = curr->right
    curr->right = t2

  curr->left = t1
  return curr

*/
