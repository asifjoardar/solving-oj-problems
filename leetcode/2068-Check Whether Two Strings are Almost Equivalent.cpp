class Solution {
public:
    bool checkAlmostEquivalent(string w1, string w2) {
        bool ok=true;
        map<char, int>mp1, mp2;
        for(int i=0;i<w1.size();i++){
            mp1[w1[i]]++;
        }
        for(int i=0;i<w2.size();i++){
            mp2[w2[i]]++;
        }
        for(auto it=mp1.begin();it!=mp1.end();it++){
            if(abs(it->second-mp2[it->first])>3)
                ok=false;
            mp2[it->first]=0;
            mp1[it->first]=0;
        }
        for(auto it=mp2.begin();it!=mp2.end();it++){
            if(abs(it->second-mp1[it->first])>3)
                ok=false;
            mp1[it->first]=0;
            mp2[it->first]=0;
        }
        return ok;
    }
};
