class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        int n=a.size();
        int l=0;
        int r=n-1;
        vector<int>ans;
        while(1)
        {
            if(r-l+1==k) break;
            int num=abs(x-a[l]);
            int num1=abs(x-a[r]);
            if(num>num1)
                l++;
            else
                r--;
        }
        for(int i=l;i<=r;i++)
            ans.push_back(a[i]);
        return ans;
    }
};
