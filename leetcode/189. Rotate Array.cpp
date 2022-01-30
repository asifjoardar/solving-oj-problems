class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        int i,n;
        deque<int>ans;
        k=k%nums.size();
        n=nums.size();
        while(k--){
            ans.push_front(nums[n-1]);
            n--;
        }
        for(i=0;i<n;i++)
            ans.push_back(nums[i]);
        for(i=0;i<ans.size();i++)
            nums[i]=ans[i];
        */
        int n=nums.size();
        k = k%n;
        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.begin() + n);
        reverse(nums.begin(), nums.begin() + n);
    }
};
