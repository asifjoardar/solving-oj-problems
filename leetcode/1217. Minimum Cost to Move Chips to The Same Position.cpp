class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int ans=1000000005,i,j;
        for(i=0;i<pos.size();i++){
            int sum=0;
            for(j=0;j<pos.size();j++){
                sum+=abs(pos[i]-pos[j])%2;
            }
            ans=min(ans,sum);
        }
        return ans;
    }
};
