class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>hash;
        int ans = 0;
        for(auto e : nums){
            hash[e]++;
        }
        for(auto it : hash){
            if( it.second == 1 ){
                ans = it.first;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna