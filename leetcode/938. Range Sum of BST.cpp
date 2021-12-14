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
    int sol(TreeNode* root,int L,int R)
    {
        if(root){
            sol(root->left,L,R);
            if(root->val>=L && root->val<=R)
                ans+=root->val;
            sol(root->right,L,R);
        }
        return ans;
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(!root)
            return 0;
        return sol(root,L,R);
    }
};
