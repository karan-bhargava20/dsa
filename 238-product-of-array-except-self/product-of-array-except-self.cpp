class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int b = 1;
        int n  = nums.size();
        vector<int> ans(n);
        for(int i=n-1 ; i>=0 ; i--){
            ans[i] = b ;
            b *= nums[i] ;
        }
        b = 1;
        for(int i = 0 ; i<n ; i++){
            ans[i] *= b;
            b*=nums[i];
        }
        return ans;
    }
};