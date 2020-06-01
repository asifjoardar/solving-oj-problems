class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& m, int t) {
        
if(m.empty()||m[0].empty()) return false;
        int row=m.size(),col=m[0].size();
        int l=0,r=row-1;
        bool ok=false;
        while(l<=r){
            int mid=(l+r)/2;
            if(m[mid][0]==t){
                ok=true;break;
            }
            else if(m[mid][0]>t){
            	r=mid-1;
            }
            else{
            	if(binary_search(m[mid].begin(),m[mid].end(),t)){
                    ok=true;break;
                }
                l=mid+1;
            }
        }
        return ok;
    }
};
