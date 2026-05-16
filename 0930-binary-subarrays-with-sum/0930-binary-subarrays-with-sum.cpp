class Solution {
    int atLeastSum(vector<int>& nums, int goal){
        int prefix = 0 , l = 0 , cnt = 0;
        for(int r = 0 ; r<nums.size() ; r++){
            prefix += nums[r];

            while((l<r) && (prefix > goal)){
                prefix -= nums[l];
                l++;
            }
            if(prefix <= goal ){
            cnt += r-l+1;
            }
        }
        return cnt;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atLeastSum(nums, goal) - atLeastSum(nums, goal-1);
    }
};