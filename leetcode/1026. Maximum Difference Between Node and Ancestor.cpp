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
    int ans=INT_MIN;
    void sol(TreeNode* start,int mx,int mn){
        if(start == NULL)
            return;
        mx=max(mx,start->val);
        mn=min(mn,start->val);
        ans=max(ans,mx-mn);
        sol(start->left,mx,mn);
        sol(start->right,mx,mn);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mx=INT_MIN,mn=INT_MAX;
        sol(root,mx,mn);
        return ans;
    }
};
