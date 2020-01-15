class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size(),i,j;
        int ans=0,p;
        vector<int>dp(n,1);
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j]&&dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(dp[i]>ans)
            {
                ans=dp[i];
            }
        }
        return ans;
    }
};
