class Solution {
public:
    void sortColors(vector<int>& nums) {
        int L = 0;
        int M = 0;
        int H = nums.size()-1;
        while(M<=H){
            if(nums[M] == 0){
                swap(nums[M++] , nums[L++]);
            }
            else if(nums[M] == 1){
                M++;
            }
            else if(nums[M] == 2){
                swap(nums[M],nums[H--]);
            }
        }
    }
};