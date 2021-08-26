class Solution {
public:
    bool judgeSquareSum(int c) {
        int n,num1,num2;
        bool ok=false;
        n = sqrt(c);
        for(int i=0;i<=n;i++){
            num1 = i*i;
            num2 = sqrt(c-num1);
            if(num1+(num2*num2) == c){
                ok=true;
                break;
            }
        }
        return ok;
    }
};
