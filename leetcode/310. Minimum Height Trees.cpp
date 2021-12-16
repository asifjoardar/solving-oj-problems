class Solution {
public:
    
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1)
            return vector<int>{0};
        
        vector<vector<int>>g(n);
        vector<int>d(n,0);
        
        for(int i=0;i<edges.size();i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            g[a].push_back(b);
            g[b].push_back(a);
            d[a]++;
            d[b]++;
        }
        
        queue<int>q;
        
        for(int i=0;i<n;i++)
            if(d[i]==1)
                q.push(i);
        
        vector<int>res;
        
        while(!q.empty())
        {
            int n = q.size();
            res.clear();
            while(n--)
            {
                int node = q.front();
                q.pop();
                res.push_back(node);
                for(int i=0;i<g[node].size();i++)
                {
                    d[g[node][i]]--;
                    if(d[g[node][i]]==1)
                    {
                        q.push(g[node][i]);
                    }
                }
            }
        }
        return res;
    }
};
