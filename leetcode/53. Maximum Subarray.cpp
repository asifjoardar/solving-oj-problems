class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=nums.size();
        int maxi=nums[0],j=0,sum=nums[0];
        for(int i=1;i<l;i++)
        {
            sum=max(sum+nums[i],nums[i]);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
