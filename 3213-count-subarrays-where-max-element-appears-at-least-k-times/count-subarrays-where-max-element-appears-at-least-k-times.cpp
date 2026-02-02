class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l = 0;
        int n  = nums.size();
        long long ans = 0;
        int freq = 0;
        int maxi = 0;
        for(const int & ele:nums)maxi = max(maxi , ele);
        
        for(int r = 0 ; r<nums.size() ; r++){
            // expand window
            if(nums[r]==maxi)freq++;
            
            // condition satisfy ,ans update , shrink with check
            while(freq == k){
                ans += n-r ;
                if(nums[l]==maxi)freq--;
                l++;
            }
        }
        return ans;
    }
};
