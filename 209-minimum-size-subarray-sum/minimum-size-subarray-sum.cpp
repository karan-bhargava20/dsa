class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int min_length = INT_MAX;
        int sum = 0;
        while(r<nums.size()){
            // maximise the array
            sum += nums[r]; //by incresing size we increse sum
            //if required subarray find
            while(sum >= target){
                min_length = min(min_length , r-l+1);
                sum -= nums[l++] ;//but shrinking we  decrese sum
            }
            r++;
        }
        return  (min_length==INT_MAX) ? 0:min_length;
    }
};