rebalance(t):
  Input: tree t
  Output: rebalanced t

  if size(t) < 3:
    return t

  t = partition(t, size(t) / 2)
  t->left = rebalance(t->left)
  t->right = rebalance(t->right)
  return t
