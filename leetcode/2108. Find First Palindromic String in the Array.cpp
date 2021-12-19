class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int i;
        string ans ="";
        for(i=0;i<words.size();i++){
            string tmp=words[i];
            reverse(tmp.begin(),tmp.end());
            if(words[i]==tmp){
                ans=words[i];
                break;
            }
        }
        return ans;
    }
};
