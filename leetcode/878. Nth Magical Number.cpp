class Solution {
public:
    int MOD = 1e9+7;
    int nthMagicalNumber(int n, int a, int b) {
        long long int l = lcm(a, b), c = (l/a) + (l/b) - 1, k = (n-1) / c, ans = 0;
        for(int i = 1, j = 1, magicalnum = n-k*c; magicalnum; magicalnum--) 
            if(a*i < b*j) ans = a * i++;
            else ans = b * j++;

        return (k*l + ans) % MOD;
    }
};
