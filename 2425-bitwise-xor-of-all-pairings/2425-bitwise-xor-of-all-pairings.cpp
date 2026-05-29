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

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna