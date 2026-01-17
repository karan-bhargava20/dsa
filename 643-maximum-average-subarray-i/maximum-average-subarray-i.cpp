class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;
        for(int i = 0 ; i<k ;i++) sum+=nums[i];
        double maxi = sum/k ; 
        for(int i = k ; i<nums.size() ; i++){
            sum -= nums[i-k];
            sum += nums[i];
            maxi = max(maxi,sum/k) ;
        }
        return maxi  ;
    }
};