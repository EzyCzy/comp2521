/*
bstDelete(t,v):
  Input: tree t, value v
  Output: t with v deleted

  if t is empty:
    return empty tree
  else if v < t->item:
    t->left = bstDelete(t->left, v)
  else if v > t->item:
    t->right = bstDelete(t->right,v)
  else:
    if t->left is empty:
      new = null
    else if t->right is empty:
      new = t->left
    else:
      new = bstJoin(t->left, t->right)

    free(t)
    t = new
  return t
  */
