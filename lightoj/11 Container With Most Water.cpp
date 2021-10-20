class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0, first, last, p, q;
        first = 0;
        last = h.size()-1;
        
        while(first<last){
            p = last - first;
            q = min(h[first], h[last]);
            ans = max((int)ans, (int)(p*q));
            if(h[first]<=h[last]){
                first++;
            }
            else{
                last--;
            }
        }
        
        return ans;
    }
};
