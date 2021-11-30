class Solution {
public:
    int minimumBuckets(string st) {
        int i;
        bool ok=true;
        for(i=0;i<st.size();i++){
            if(st[i]=='H'){
                if(((i-1>=0 and st[i-1]=='H') or (i-1<0)) and ((i+1<st.size() and st[i+1]=='H')  or (i+1>=st.size())))
                    ok=false;
            }
        }
        if(ok){
            int ans=0;
            for(i=0;i<st.size();i++){
                if(st[i]=='.'){
                    if((i-1>=0 and st[i-1]=='H') and (i+1<st.size() and st[i+1]=='H')){
                        st[i]='B';
                        ans++;
                        i+=2;
                    }
                }
            }
            for(i=0;i<st.size();i++){
                if(st[i]=='H'){
                    if(((i-1>=0 and st[i-1]=='.')) and ((i+1<st.size() and st[i+1]!='B')  or (i+1>=st.size()))){
                        ans++;
                    }
                    else if(((i-1>=0 and st[i-1]!='B') or (i-1<0)) and ((i+1<st.size() and st[i+1]=='.')))
                        ans++;
                }
            }
            return ans;
        }
        else{
            return -1;
        }
    }
};
