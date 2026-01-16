class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0 ;
        int n = nums.size();
        unordered_map<int , int > hash ;
        hash[0] = 1;
        int count = 0;
        for(int j = 0 ; j < n ; j++){
            sum += nums[j];
            if(hash.find(sum - k) != hash.end()){
              count += hash[sum-k];
            }
            hash[sum]++;
        }
        return count;
    }
};