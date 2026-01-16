class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0 ;
        unordered_map<int , int > hash ;
        hash.reserve(nums.size());
        hash[0] = 1;
        int count = 0;
        for(int j = 0 ; j < nums.size() ; j++){
            sum += nums[j];
            if(hash.find(sum - k) != hash.end()){
              count += hash[sum-k];
            }
            hash[sum]++;
        }
        return count;
    }
};