/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sol(TreeNode* root, int &l, int &r) {
        if (!root)
            return 0;
        
        int ll=0, lr=0, rl=0, rr=0;
        l = sol(root->left, ll, lr);
        r = sol(root->right, rl, rr);
        
        return max((root->val+ll+lr+rl+rr), (l+r));
    }

    int rob(TreeNode* root) {
        int l, r;
        return sol(root, l, r);
    }
};