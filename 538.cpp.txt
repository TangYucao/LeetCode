/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int cur_sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        
        convertBST(root->right);
        cur_sum+=root->val;
        root->val=cur_sum;
        convertBST(root->left);
        return root;
    }
};