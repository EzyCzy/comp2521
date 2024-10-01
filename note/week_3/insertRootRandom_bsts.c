insertRandom(t, v):
  Input: tree t, value v
  Output: t with v inserted

  if t is empty:
    return v

  if random() mod q < p:
    return insertAtRoot(t,v)
  else
    return insertAtLeaf(t, v)
