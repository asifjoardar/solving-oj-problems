class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int i,ans=1;
        map<char,int>mp;
        mp[s[0]]=1;
        int last=1;
        for(i=1;i<s.size();i++){
            if(mp[s[i]]!=0 and last<=mp[s[i]]){
                last=mp[s[i]]+1;
            }
            mp[s[i]]=i+1;
            ans=max(ans,abs(last-(i+1))+1);
        }
        return ans;
    }
};
