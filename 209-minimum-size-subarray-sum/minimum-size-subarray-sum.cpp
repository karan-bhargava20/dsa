class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = 0;
        int min_len = INT_MAX;
        int sum_arr_ele = 0;
        for(int e = 0 ; e<nums.size() ; e++){
            sum_arr_ele += nums[e];
            while( sum_arr_ele >= target){ 
                min_len = min( min_len , e-s+1 );
                sum_arr_ele -= nums[s++];
            }
        }
        return (min_len != INT_MAX) ? min_len : 0 ;
    }
    };