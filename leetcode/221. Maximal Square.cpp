class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty())
            return 0;
        
        int m = matrix.size(), n = matrix[0].size(), sz = 0, pre, i, j;
        vector<int> cur(n, 0);
        
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                int tmp = cur[j];
                if (!i || !j || matrix[i][j] == '0'){
                    cur[j] = matrix[i][j] - '0';
                }
                else{
                    cur[j] = min(pre, min(cur[j], cur[j - 1])) + 1;
                }
                sz = max(cur[j], sz);
                pre = tmp;
            }
        }
        
        return (sz * sz);
    }
};
