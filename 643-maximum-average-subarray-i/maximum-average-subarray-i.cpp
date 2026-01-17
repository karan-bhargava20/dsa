
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0.0;
        for(int i = 0 ; i<k ;i++) sum+=nums[i];
        double maxi{static_cast<double>(sum)/k} ; 
        for(int i {k} ; i<nums.size() ; i++){
            sum -= nums[i-k];
            sum += nums[i];
            maxi = max(maxi,static_cast<double>(sum)/k) ;
        }
        return maxi  ;
    }
};