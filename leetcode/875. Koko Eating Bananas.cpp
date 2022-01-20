class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        if(p.size()==1 and p[0]<=h)
            return 1;
        long int high=1000000000, low=0,i;
        while(high>=low){
            long int mid=max((high+low)/2,(long int)1);
            long int num=0;
            for(i=0;i<p.size();i++){
                num+=p[i]/mid;
                if(p[i]%mid)
                    num++;
            }
            if(num<=h)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};
