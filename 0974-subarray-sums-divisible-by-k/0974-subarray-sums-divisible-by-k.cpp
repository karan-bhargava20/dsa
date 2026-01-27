class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix = 0;
        int cnt = 0;
        vector<int> mp(k,0);
        mp[0]=1;
        for(int i = 0 ; i<n ; i++){
            prefix += nums[i];
            int rem =prefix % k;
            if ( rem < 0 ) rem += k;
            cnt += mp[rem];
            mp[rem]++;
        }
        return cnt ;
    }
};