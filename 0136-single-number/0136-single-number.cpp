class Solution {
public:
    int singleNumber(vector<int>& nums){
        int k = 0;
        for(auto ele : nums){
            k ^=ele;
        }
        return k;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna