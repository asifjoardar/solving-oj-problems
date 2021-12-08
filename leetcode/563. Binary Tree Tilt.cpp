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
    int ans=0;
    int dfs(TreeNode* n) {
        if(n==NULL)
            return 0;
        
        int l=dfs(n->left);
        int r=dfs(n->right);
        ans+=abs(l-r);
        
        return (l+r+n->val);
    }
    
    int findTilt(TreeNode* root) {
        dfs(root);
        
        return ans;
    }
};
