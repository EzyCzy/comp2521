bstInsert(t, v):
  Input: tree t, value v
  Output: t with v inserted

  t = insertAtLeaf(t,v)

  if size(t) mod k = 0;
    t = rebalance(t)

  return t
