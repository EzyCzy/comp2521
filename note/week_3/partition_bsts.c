partition(t, i):
  Input: tree t, index i
  Output: tree with ith item moved to root

  m = size(t->left)
  if(i < m)
    t->left = partition(t->left, i)
    t = rotateRight(t)
  else if i > m:
    t->right = partition(t->right, i-m-1)
    t = rotateLeft(t)
  return t
