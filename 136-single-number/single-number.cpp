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