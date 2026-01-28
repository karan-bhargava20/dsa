class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int , int> mp;
        int n = nums.size();
        int sum = 0 ;
        int max_len = 0 ;
        for(int j = 0 ; j<n ; j++){
            sum += (nums[j]) ?  1 : -1 ;
            if(sum==0) max_len = j+1;
            if(mp.find(sum)!=mp.end()){
                max_len = max(j-mp[sum],max_len);
            }
            else{
                mp[sum] = j;
            }
        }
        return max_len;
    }
};