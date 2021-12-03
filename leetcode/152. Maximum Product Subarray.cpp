class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        if (!nums.size())
            return 0;
        
        int ans = INT_MIN;
        int maxProd = 1;
        int minProd = 1;
        
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] < 0) {
                swap(maxProd, minProd);
            }
            maxProd = max(maxProd*nums[i], nums[i]);
            minProd = min(minProd*nums[i], nums[i]);
            ans = max(ans, maxProd);
        }
        
        return ans;
    }
};
