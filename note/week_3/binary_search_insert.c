/*
  bstInsert(t,v)
  Input: tree t, value v
  Output: t with v inserted
if t is empty:
  return new node containing v
else if v < t->item:
  t->left = bstInsert(t->left, v)
else if v > t->item:
  t->right = bstInsert(t->right,v)

  return t;
*/
