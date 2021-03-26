class Solution {
public:
    int maximumGap(vector<int>& a) {
        if(a.size()<2)
            return 0;
        int i,ans=0;
        sort(a.begin(),a.end());
        for(i=0;i<a.size()-1;i++){
            ans=max(ans,a[i+1]-a[i]);
        }
        return ans;
    }
};
