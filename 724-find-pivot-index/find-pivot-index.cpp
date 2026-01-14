class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long int R = accumulate(nums.begin(),nums.end(),0);
        long long int L = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            R -= nums[i];
            if(L==R)return i;
            L+=nums[i]; 
        }
        return -1;
    }
};