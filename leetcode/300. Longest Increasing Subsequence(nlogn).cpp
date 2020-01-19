class Solution {
public:
    int bs(vector<int>&a,int l,int r,int num,vector<int>&t)
    {
        while(r-l>1)
        {
            int m=(l+r)/2;
            if(a[t[m]]>=num)
                r=m;
            else
                l=m;
        }
        return r;
    }
    int lengthOfLIS(vector<int>& a) {
        int n=a.size(),i,j;
        int ans=0,len=1;
        vector<int>t(n,0);
        for(i=1;i<n;i++)
        {
            if(a[i]<a[t[0]])
                t[0]=i;
            else if(a[i]>a[t[len-1]])
            {
                //pos[i]=t[len-1];
                t[len++]=i;
            }
            else
            {
                int p=bs(a,-1,len-1,a[i],t);
                //pos[i]=t[p-1];
                t[p]=i;
            }
        }
        return min(len,n);
    }
};
