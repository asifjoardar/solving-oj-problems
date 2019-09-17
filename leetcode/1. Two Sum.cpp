class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p,q;
        for(int i=0;i<nums.size()-1;i++)
        {
            int f=0;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    p=i,q=j;
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        return {p,q};
    }
};
