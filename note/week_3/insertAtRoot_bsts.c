insertAtRoot(t, v):
  Input: tree t, value v
  Output: t with v inserted at the root

  if t is empty:
    return new node containing v
  else if v < t->item:
    t->left = insertAtRoot(t->left, v)
    t = rotateRight(t)
  else if v > t->item:
    t->right = insertAtRoot(t->right, v)
    t = rotateLeft(t)

  return t
