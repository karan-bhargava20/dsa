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
    // int maxi = accumulate(nums.begin(), nums.end(), 0);
    // int L_bit = -1;
    // while(maxi){
    //     L_bit++;
    //     maxi = maxi>>1;
    // }
    int ans = 0 ;
    for(int bit = 0 ; bit <= 31 ; bit++ ){
        int cnt = 0;
        for(auto it : nums){
            if(it & (1 << bit)){
                cnt++;
            }
        }
        if(cnt % 3 == 1){
            ans |= 1 << bit;
        }

    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna