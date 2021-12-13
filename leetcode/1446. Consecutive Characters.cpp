class Solution {
public:
    int maxPower(string s) {
        int i,ans=0,count=0;;
        for(i=0;i<=s.size()-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                ans=max(ans,count);
                count=0;
            }
        }
        return ans+1;
    }
};
