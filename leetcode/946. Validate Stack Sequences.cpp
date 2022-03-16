class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i,j=0;
        stack<int>s;
        for(i=0;i<pushed.size();i++){
            s.push(pushed[i]);
            while(!s.empty() and s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};
