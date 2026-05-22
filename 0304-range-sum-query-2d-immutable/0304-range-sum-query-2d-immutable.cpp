class NumMatrix {
    vector<vector<int>>prefix;
public:

    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        prefix = vector<vector<int>>(m+1,vector<int>(n+1,0));
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                int r = i+1;
                int c = j+1;
                prefix[r][c] = prefix[r-1][c] + prefix[r][c-1] - prefix[r-1][c-1] + matrix[i][j];
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        r1 = r1+1;
        r2 = r2+1;
        c1 = c1+1;
        c2 = c2+1;
        return prefix[r2][c2] - prefix[r1-1][c2] - prefix[r2][c1-1] + prefix[r1-1][c1-1];
    }
};

/*
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */