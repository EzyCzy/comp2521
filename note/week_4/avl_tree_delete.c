/*
avlDelete(t, v):
  Input: AVL tree t, item v
  Output: t with v deleted

  if t is empty:
    return NULL
  else if v < t->item
    t->left = avlDelete(t->left, v)
  else if v > t->item
    t->right = avlDelete(t->right, v)
  else:
    if t->left is empty:
      temp = t->right
      free(t)
      return temp
    else if t->right is empty:
      temp=t->left
      free(t)
      return temp
    else:
      successor = minimum value in t->right
      t->item = successor
      t->right = avlDelete(t->right, successor)

    return avlRebalance(t)
*/
