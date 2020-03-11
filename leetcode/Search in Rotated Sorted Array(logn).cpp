class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,l=0,r=nums.size()-1;
        while(l<=r)
        {
            //cout<<l<<" "<<r<<endl;
            int mid=(r+l)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>=nums[r]){
                if((nums[mid]<target or nums[r]>=target))
                    l=mid+1;
                else
                    r=mid-1;
            }
            else{
                if((nums[mid]<target and nums[r]>=target))
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return -1;
    }
};
