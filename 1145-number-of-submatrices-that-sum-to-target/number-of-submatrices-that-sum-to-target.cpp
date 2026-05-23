class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>>prefix(m,vector<int>(n,0));
        for(int i = 0; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                prefix[i][j] = (j != 0) ? prefix[i][j - 1] + matrix[i][j]: matrix[i][j];
            }
        }
        int cnt = 0;
        for(int l = 0 ; l < n ; l++){
            for(int r = l ; r < n ; r++){
                int sumPrefix = 0;
                unordered_map<int,int>map;
                map[0] = 1;
                for(int row = 0; row < m ; row++){
                    sumPrefix += (l>0) ? prefix[row][r] - prefix[row][l-1] : prefix[row][r];
                    if(map.count(sumPrefix-target)){
                    cnt += map[sumPrefix-target];
                    }
                    map[sumPrefix]++;
                }
            }
        }
        return cnt;
    }
};