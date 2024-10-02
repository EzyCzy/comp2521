/*

avlRebalance(t):
  Input: possibly unbalanced tree t
  Output: height balanced t

  bal = balance(t)
  if bal > 1:
    if balance(t->left) < 0:
      t->left = rotateLeft(t->left)
    t = rotateRight(t)
  else if bal < -1:
    if balance(t->right) > 0:
      t->right = rotateRight(t->right)
    r = rotateLeft(t)

  return t

balance(t):
  Input: tree t
  Output: balance factor of t
  
  return height(t->left) - height(t->right)
*/
