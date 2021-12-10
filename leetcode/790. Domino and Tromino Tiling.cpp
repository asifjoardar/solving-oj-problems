class Solution {
public:
    int numTilings(int n) {
        if (n<3)
            return n;
        
        int mod = pow(10, 9)+7;
        
        vector<long>dt(n+1, 0), tt(n+1, 0);
        
        dt[0] = 0, dt[1] = 1, dt[2] = 2;
        tt[0] = 0, tt[1] = 1, tt[2] = 2;
        
        for (int i=3; i<=n; i++) {
            dt[i] = (dt[i-1]+dt[i-2]+2*tt[i-2])%mod;
            tt[i] = (tt[i-1]+dt[i-1])%mod;
        }
        
        return dt[n];
    }
};
