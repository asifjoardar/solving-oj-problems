class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,maxi=INT_MIN,mini=INT_MAX,mxpos,mnpos,ans;
        if(nums.size()==0)
            return -1;
        for(i=0;i<nums.size();i++)
        {
            if(maxi<nums[i])
            {
                mxpos=i;
                maxi=nums[i];
            }
            if(mini>nums[i])
            {
                mnpos=i;
                mini=nums[i];
            }
        }
        if(mxpos==nums.size()-1)
        {
            auto it=lower_bound(nums.begin(),nums.end(),target);
            if(it==nums.end())
                ans=-1;
            else{
                ans=it-nums.begin();
                if(nums[ans]!=target)
                    ans=-1;
            }
        }
        else
        {
            if(target<nums[0])
            {
                auto it=lower_bound(nums.begin()+mnpos,nums.end(),target);
                if(it==nums.end())
                    ans=-1;
                else{
                    ans=it-nums.begin();
                    if(nums[ans]!=target)
                    ans=-1;
                }
            }
            else
            {
                auto it=lower_bound(nums.begin(),nums.begin()+mnpos,target)-nums.begin();
                if(nums[it]==target)
                    ans=it;
                else
                    ans=-1;
            }
        }
        return ans;
    }
};
