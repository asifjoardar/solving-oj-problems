class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int ans;
        auto it=lower_bound(a.begin(),a.end(),t);
        if(t<a[0])
            ans=0;
        else
        {
            ans=it-a.begin();
        }
        return ans;
    }
};
