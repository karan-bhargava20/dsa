class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total_sum = accumulate(nums.begin() , nums.end() , 0LL);
        //( total_sum -  prefix_i ) %p == 0 -> subarray(i+1 to n) div by p
        int rem = (total_sum + p ) % p; // 0,1,2,3,...,p-1
        if(rem == 0 ) {
            return 0;
        }
        unordered_map<int,int> map;
        map[0]=-1;
        int len = nums.size();
        int l = 0 , prefix_r = 0;
        
        for(int r=0 ; r<nums.size() ; r++){
            prefix_r = (prefix_r + nums[r])%p;
            // prefix_L % p 
            int find = (prefix_r - rem + p) % p ; // 0 , 1,2,3,..,p-1
            if(map.count(find)){
                len = min(len , r - map[find]);
            }
            map[prefix_r] = r; // 0 , 1,2,3,..,p-1(keys)
       }
       return (len != nums.size()) ? len:-1;
    }
};