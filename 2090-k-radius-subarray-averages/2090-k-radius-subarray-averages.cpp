class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n =  nums.size();
        vector<int> args (n,-1);
        int win_size = 2*k+1;
        if(n<win_size) return args;
        long long sum = 0 ;
        for(int w = 0 ; w < win_size ; w++){
            sum += nums[w];
        }
        int j = k;
        args[j++] = sum / win_size ;  
        for(int i  = win_size ; i< n ;i++){
            sum+=nums[i]-nums[i-win_size];
            args[j++] = sum / win_size;
        }
        return args;
    }
};