class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int sum = 0, ans = 0, i, lage;
        map<int, int> mp;
        mp[0] = 1;
        int n = a.size();
        for(i=0 ; i<n ; i++){
            sum += a[i];
            lage = sum - k;
            ans += mp[lage];
            mp[sum]++;
        }
        return ans;
    }
};
