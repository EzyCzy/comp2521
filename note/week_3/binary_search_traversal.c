/*
preorder (t):
  Input: tree t

  if t is empty:
    return
  visit(t)
  preorder(t->left)
  preorder(t->right)

inorder(t):
  Input: tree t

  if t is empty return:
    return
  inorder(t->left)
  visit(t)
  inorder(t->right)

postorder(t):
  Input: tree t

  if t is empty:
    return

  postorder(t->left)
  postorder(t->right)
  visit(t)

*/

levelorder(t):
