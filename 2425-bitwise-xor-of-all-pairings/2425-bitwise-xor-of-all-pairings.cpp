class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        // nums1
        if(nums1.size() & 1){
            for(auto ele : nums2){
                ans ^= ele;
            }
        }
        if(nums2.size() & 1){
            for(auto ele : nums1){
                ans ^=ele;
            }
        }
        return ans;
    }
};

// 10^2^2^1 2^2^2^1 5^2^2^1 0^2^2^1