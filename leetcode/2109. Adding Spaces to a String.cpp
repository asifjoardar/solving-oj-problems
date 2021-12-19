class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        int i,j;
        string ans="";
        sort(sp.begin(),sp.end());
        j=0;
        for(i=0;i<s.size();i++){
            if(j<sp.size() and i==sp[j]){
                ans+=' ';
                j++;
            }
            ans+=s[i];
        }
        
        return ans;
    }
};
