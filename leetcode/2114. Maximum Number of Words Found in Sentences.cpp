class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans=0,i,j;
        for(i=0;i<s.size();i++){
            int count=0;
            for(j=0;j<s[i].size();j++){
                if(s[i][j]==' ')
                    count++;
            }
            ans=max(ans,count+1);
        }
        return ans;
    }
};
