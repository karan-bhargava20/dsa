class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        // int sub_len = INT_MAX;
        for(int i=0; i<nums.size()-1 ; i++){
            int s = i+1;
            int e = nums.size()-1;
            int j = -1;
            while(s<=e){
                int mid = s + (e-s)/2;
                int sum = nums[i] + nums[mid];
                if(sum == target){
                    j = mid;
                    e = mid-1;
                }
                else if(sum > target){
                    e = mid-1;
                }
                else if(sum < target){
                    s = mid+1;
                }
            }
            if(j!=-1){
                ans[0] = (i+1);
                ans[1] = (j+1);
                break;
            }
        }
        return ans;
    }
};