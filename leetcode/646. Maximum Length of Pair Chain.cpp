class Solution {
public:
    int findLongestChain(vector<vector<int>>& v) {
        int n = v.size(),i,j,ans=0,last,cnt;
        sort(v.begin(), v.end(), [](const vector<int>& a, vector<int>& b){
            return a[0] < b[0];
        });
        int dp[n];
        memset(dp,-1,sizeof(dp));
        for(i = n-1 ; i>=0 ; i--){
            cnt = 0;
            for(j = i+1 ; j<n ; j++){
                if(v[j][0]>v[i][1]){
                    cnt=max(cnt,dp[j]);
                }
            }
            dp[i]=cnt+1;
        }
        for(i=0;i<n;i++){
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
