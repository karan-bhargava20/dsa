class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        long long int sum = 0;
        int l = 0;
        map[0] = -1 ;
        for(int r=0 ; r<nums.size() ; r++){
            sum += nums[r];
            int rem = (sum%k+k)%k;
            // check
            if(map.count(rem)){
                l = map[rem];
                if(r-l>=2){
                    return true;
                }
            } else{
            map[rem] = r;
            }

        }
        return false;
    }
};
