/*bstSearch(t, v):
  Input: tree t, value v
  Output: true if v is in t
          false otherwise

  if t is empty:
    return false
  else if v < t->item:
    return bstSearch(t->left,v);
  else if v > t->item:
    return bstSearch(t->right,v);
  else:
    return true;
*/
