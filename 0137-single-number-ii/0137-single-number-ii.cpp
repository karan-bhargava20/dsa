class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     unordered_map<int,int>hash;
    //     int ans = 0;
    //     for(auto e : nums){
    //         hash[e]++;
    //     }
    //     for(auto it : hash){
    //         if( it.second == 1 ){
    //             ans = it.first;
    //         }
    //     }
    //     return ans;
    // 4ms Beats13 .65%
    
    // int ans = 0 ;
    // for(int bit = 0 ; bit <= 31 ; bit++ ){
    //     int cnt = 0;
    //     for(auto it : nums){
    //         if(it & (1 << bit)){
    //             cnt++;
    //         }
    //     }
    //     if(cnt % 3 == 1){
    //         ans |= 1 << bit;
    //     }

    // }
    // return ans;
    // }
    // 3ms Beats 30.34%
    sort(nums.begin(), nums.end());
    int ans = 0 ;
    int n = nums.size();
    for(int i=1 ; i<n ; i=i+3){
        if( nums[i-1] != nums[i] ){
            return nums[i-1];
        }
    }
    return nums[n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna