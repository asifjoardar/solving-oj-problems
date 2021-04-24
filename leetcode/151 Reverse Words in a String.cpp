class Solution {
public:
    string reverseWords(string s) {
        int i;
        string ans,s1;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and !s1.empty()){
                reverse(s1.begin(),s1.end());
                if(ans.size())
                    ans+=' ';
                ans+=s1;
                s1.clear();
            }
            else if(s[i]!=' '){
                s1+=s[i];
            }
        }
        if(s1.size()){
            if(ans.size())
                ans+=' ';
            reverse(s1.begin(),s1.end());
            ans+=s1;
        }
        return ans;
    }
};
