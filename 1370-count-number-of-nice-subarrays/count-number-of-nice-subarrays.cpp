class Solution {
    int AtLeastK(vector<int>& nums, int k) {
        int odd=0,ans=0, l=0;
        for(int r = 0 ; r<nums.size() ; r++){
            int num = nums[r];
            if(num & 1){
                odd++;
            }
            while(odd>k){
                if(nums[l] & 1) odd--;
                l++;
            }
            if(odd<=k){
                ans += r-l+1;
            }
        }
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return AtLeastK(nums , k) - AtLeastK(nums , k-1) ;
    }
};