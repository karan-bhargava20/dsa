class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix = 0;//sum
        int cnt = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i = 0 ; i<n ; i++){
            prefix += nums[i];
            int rem =( prefix % k + k )%k;
            auto it = mp.find(rem);
            if(it != mp.end()){
                cnt += it->second;
            }
            mp[rem]++;
        }
        return cnt ;
    }
};