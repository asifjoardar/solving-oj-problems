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
    vector<int>v;
    void traverse(TreeNode* node){
        if(node==NULL)
            return;
        v.push_back(node->val);
        traverse(node->left);
        traverse(node->right);
    }
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        int n = v.size();
        bool ok=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]+v[j]==k){
                    ok=true;
                    break;
                }
            }
        }
        return ok;
    }
};
