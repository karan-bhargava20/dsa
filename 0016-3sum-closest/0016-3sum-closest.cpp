class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int mindis = INT_MAX;
        int ans = 0;
        int n = nums.size();
        for(int f = 0; f<n-2 ; f++){
            int s = f + 1;
            int t = n - 1;
            int sum = 0;
            while(s<t){
                sum = nums[f] + nums[s] + nums[t];
                int dis =  abs(target - sum);
                if(mindis > dis){
                    mindis = dis;
                    ans = sum;  
                }
                
                if(sum < target){
                    s++;
                } else if(sum > target){
                    t--;
                }else {
                    return sum;
                }
            }
         }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna