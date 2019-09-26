class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        int n=a.size(),ans=0,i;
        stack<int>s;
        for(i=0;i<n;)
        {
            if(s.empty() or a[i]>=a[s.top()]){
                s.push(i);i++;
            }
            else
            {
                int p=s.top();
                s.pop();
                if(s.empty())
                    ans=max(ans,a[p]*i);
                else
                    ans=max(ans,a[p]*(i-s.top()-1));
            }
        }
        while(!s.empty())
        {
            int p=s.top();
            s.pop();
            if(s.empty())
                ans=max(ans,a[p]*i);
            else
                ans=max(ans,a[p]*(i-s.top()-1));
        }
        return ans;
    }
};
