class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp.reserve(nums.size());
        int l   = 0;
        int ans = 0;
        for(int r = 0; r<nums.size() ; r++){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                l++;
            }
            ans += r-l+1;
        }
        l=0;
        mp.clear();
        for(int r = 0; r<nums.size() ; r++){
            mp[nums[r]]++;
            while(mp.size()>k-1){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)mp.erase(nums[l]);
                l++;
            }
            ans -= r-l+1;
        }
        return ans ;
    }
    
};