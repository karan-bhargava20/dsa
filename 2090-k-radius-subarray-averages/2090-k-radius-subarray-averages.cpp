class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n =  nums.size();
        vector<int> args (n,-1);
        long long sum = 0 ;
        int win_size = 2*k+1;
        for(int w = 0 ; w<2*k+1 && w<n ; w++){
            sum += nums[w];
        }
        int j = k;
        while(j<n-k){
            args[j++] = sum / (2*k+1);
            for(int i = 2*k+1 ; i<n && j<n; i++){
            sum+=nums[i]-nums[i-(2*k+1)];
            args[j++]= sum / (2*k+1);
            }
        }
        return args;
    }
};