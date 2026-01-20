class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<e){
            int mid = s + (e-s)/2;
            if(nums.at(mid) < nums.at(n-1)) e = mid ;
            else if (nums.at(mid) > nums.at(n-1)) s = mid + 1;
        }
        return nums[s] ;
    }
};