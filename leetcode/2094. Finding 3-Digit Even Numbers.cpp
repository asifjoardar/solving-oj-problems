class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        int i,j,k;
        vector<int>ans;
        map<int,int>mp;
        for(i=0;i<d.size();i++){
            if(d[i]%2==0){
                for(j=0;j<d.size();j++){
                    if(j!=i){
                        for(k=0;k<d.size();k++){
                            if(d[k]!=0 and k!=i and k!=j){
                                mp[(d[k]*100)+(d[j]*10)+d[i]]=1;
                            }
                        }
                    }
                }
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->first);
        }
        return ans;
    }
};
