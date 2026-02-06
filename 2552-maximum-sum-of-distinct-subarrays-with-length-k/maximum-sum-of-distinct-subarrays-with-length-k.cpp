class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int win_size) {
        unordered_map <int,int> mp;
        long long ans = 0 , n = nums.size();
        long long sum = 0;
        // create window with freq
        for(int w = 0 ; w<win_size ; w++){
            sum+=nums[w];
            mp[nums[w]]++;
        }
        // check valid window
        if(mp.size()==win_size){
            ans = max(ans , sum);
        }
        // update window , freq , ans 
        for(int w = win_size ; w<n ; w++){
            sum += nums[w]-nums[w-win_size];

            mp[nums[w]]++;

            if(--mp[nums[w-win_size]]==0)
                mp.erase(nums[w-win_size]);

            if(mp.size()==win_size){
            ans = max(ans , sum);
            }
        }
        return  ans ;
    }
};