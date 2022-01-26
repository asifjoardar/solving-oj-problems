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
    multiset<int>mst;
    void traverse(TreeNode* root){
        if(!root)
            return;
        mst.insert(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        traverse(root1);
        traverse(root2);
        for(auto val : mst){
            ans.push_back(val);
        }
        return ans;
    }
};
