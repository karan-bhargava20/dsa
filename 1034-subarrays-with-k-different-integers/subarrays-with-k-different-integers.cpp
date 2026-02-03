class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        vector<int>mp(nums.size()+1,0);
        // mp.reserve(nums.size()+1);
        int l   = 0;
        int ans = 0;
        int dist_cnt = 0;
        for(int r = 0; r<nums.size() ; r++){
            mp[nums[r]]++;
            if(mp[nums[r]]==1)dist_cnt++;
            while(dist_cnt > k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)dist_cnt--;
                l++;
            }
            ans += r-l+1;
        }
        l=0;
        dist_cnt = 0;
        mp.clear();
        mp.resize(nums.size()+1, 0);
        for(int r = 0; r<nums.size() ; r++){
            mp[nums[r]]++;
            if(mp[nums[r]]==1)dist_cnt++;
            while(dist_cnt > k-1){
                mp[nums[l]]--;
                if(mp[nums[l]]==0)dist_cnt--;
                l++;
            }
            ans -= r-l+1;
        }
        return ans ;
    }
    
};