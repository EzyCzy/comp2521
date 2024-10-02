/*
avlInsert(t, v):
  Input: AVL tree t, item v
  Output: t with v inserted

  if t is empty:
      return v;
  else if v < t->item:
      t->left = avlInsert(t->left, v)
  else if v > t->item:
      t->right = avlInsert(t->right, v)
  else 
      t -> t;

  return avlRebalance(t)
*/
