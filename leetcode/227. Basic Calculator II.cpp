class Solution {
public:
    int calculate(string s) {
        long long int i,tmp=0,ans=0;
        char sign = '+';
        stack<int>st;
        for(i=0;i<s.size();i++){
            if(isdigit(s[i])){
                tmp = 10*tmp + s[i]-'0';
            }
            if(!isdigit(s[i]) && !isspace(s[i]) || i == s.size()-1){
                if (sign == '-')
                    st.push(-tmp);
                else if (sign == '+')
                    st.push(tmp);
                else {
                    int num;
                    if (sign == '*' )
                        num = st.top()*tmp;
                    else
                        num = st.top()/tmp;
                    st.pop();
                    st.push(num);
                } 
                sign = s[i];
                tmp = 0;
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
