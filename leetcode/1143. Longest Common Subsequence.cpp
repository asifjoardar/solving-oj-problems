class Solution {
public:
    string s1, s2;
    int dp[1001][1001], n, m;
    int sol(int i, int j){
        if(i==n or j==m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(s1[i]==s2[j]){
            ans=1+sol(i+1, j+1);
        }
        else{
            int p=sol(i, j+1);
            int q=sol(i+1, j);
            ans=max(p, q);
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
    int longestCommonSubsequence(string t1, string t2) {
        s1=t1;
        s2=t2;
        memset(dp, -1, sizeof(dp));
        n=s1.size();
        m=s2.size();
        return sol(0, 0);
    }
};
