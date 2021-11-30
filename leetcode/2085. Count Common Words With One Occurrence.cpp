class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        int i,ans=0;
        map<string,int>mp;
        for(i=0;i<w1.size();i++){
            if(mp[w1[i]]==0){
                mp[w1[i]]++;
            }
            else{
                mp[w1[i]]=-1;
            }
        }
        for(i=0;i<w2.size();i++){
            if(mp[w2[i]]==1){
                mp[w2[i]]++;
            }
            else{
                mp[w2[i]]=-1;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==2)
                ans++;
        }
        return ans;
    }
};
