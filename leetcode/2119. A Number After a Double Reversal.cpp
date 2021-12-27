class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(!num)
            return true;
        

        if(num%10)
            return true;
        else
            return false;
    }
};
