class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>prefix(arr.size(),0);
        for(int i = 0 ; i<arr.size() ; i++){
            prefix[i] = (i==0) ? arr[0]:prefix[i-1]^arr[i];
        }
        vector<int>ans;
        for(int row = 0 ; row <queries.size() ; row++){
            int L_i = queries[row][0];
            int R_i = queries[row][1];
            int xor_i =(L_i==0) ? prefix[R_i] : prefix[R_i] ^ prefix[L_i-1];
            ans.push_back(xor_i);
        }
        return ans ; 
    }
};  