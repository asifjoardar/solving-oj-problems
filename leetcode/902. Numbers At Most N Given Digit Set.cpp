class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& d, int n) {
        
        string s = to_string(n);
        int digit = s.size(), dsize = d.size(), ans = 0, i;
        
        for(i = 1 ; i < digit ; i++)
            ans += pow(dsize, i);
        
        for(i = 0 ; i < digit ; i++){
            bool ok = false;
            for(string &p : d){
                if(p[0] < s[i]) 
                    ans += pow(dsize, digit - i - 1);
                else if(p[0] == s[i]) 
                    ok = true;
            }
            if(!ok)
                return ans;
        }
        
        return ans+1;
    }
};
