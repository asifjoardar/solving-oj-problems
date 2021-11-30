class Solution {
public:
    vector<int> targetIndices(vector<int>& n, int t) {
        int i;
        vector<int>ans;
        sort(n.begin(),n.end());
        for(i=0;i<n.size();i++){
            if(n[i]==t)
                ans.push_back(i);
        }
        return ans;
    }
};
