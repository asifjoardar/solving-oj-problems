class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int ans=0,i;
        for(i=0;i<=k;i++){
            if(t[i]>t[k])
                ans+=t[k];
            else
                ans+=t[i];
        }
        //cout<<ans;
        for(i=k+1;i<t.size();i++){
            if(t[i]>=t[k])
                ans+=max(t[k]-1,0);
            else
                ans+=t[i];
        }
        return ans;
    }
};
