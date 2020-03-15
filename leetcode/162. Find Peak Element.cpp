class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int ans=0,l=0,r=a.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if((mid-1>=0) and a[mid-1]>a[mid])
                r=mid-1;
            else if((mid+1<a.size()) and a[mid+1]>a[mid])
                l=mid+1;
            else
                return mid;
        }
        return ans;
    }
};
