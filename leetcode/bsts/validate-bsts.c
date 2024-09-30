//https://leetcode.com/problems/validate-binary-search-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// in order approach
bool isValidate(struct TreeNode* root, long long *prev){
    if(root == NULL) return true;

    //check all left child
    if(!isValidate(root->left, prev)) return false;

    // given a simple bsts of height 2
    // then left < head < right

    // so with in order
    // we have prev as left
    // so left < head must be true

    // if we have prev as head
    // so head < right
    if (*prev >= root->val) return false;

    // if prev = left
    // then prev = head

    // if prev = head
    // then prev = left
    *prev = root->val;

    // do at right
    return isValidate(root->right, prev);
}

bool isValidBST(struct TreeNode* root) {
    long long prev = -9223372036854775808; // 2^63
    return isValidate(root, &prev);
}
