class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (!(1 <= nums[i] && nums[i] <= n)) {
                nums[i] = n + 1;
            }
        }
        for (int i = 0; i < n; i++) {
            int num = abs(nums[i]);
            if (num == n + 1) {
                continue;
            }
            int corr_idx = num - 1;
            if (nums[corr_idx] > 0) {
                nums[corr_idx] = -nums[corr_idx];
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }
        return n + 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna