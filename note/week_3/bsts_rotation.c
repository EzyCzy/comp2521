struct node *rotateRight (struct node *root) {
  if(root == NULL || root->left == NULL) return root;
  struct node *newRoot = root->left;
  root->left = newRoot->right;
  newRoot->right = root;
  return newRoot;
}

struct node *rotateLeft(struct node *root) {
  if(root == NULL || root->right == NULL) return root;
  struct node *newRoot = root->right;
  root->right = newRoot->left;
  newRoot->left = root;
  return newRoot;
}

