class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int n=a.size(),i,j,ans=0,k;
        for(i=0;i<n;i++)
        {
            j=i;k=i;
            while(j<n&&a[j]>=a[i])
                j++;
            while(k>=0&&a[k]>=a[i])
                k--;
            j--;k++;
            ans=max(ans,a[i]*(j-k+1));
        }
        return ans;
    }
};
