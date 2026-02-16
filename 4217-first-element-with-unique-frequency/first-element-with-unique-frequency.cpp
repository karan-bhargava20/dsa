class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq ;
        for(const int & num : nums){
            freq[num]++;
        }
        unordered_map<int,int> uniquefreq ;
        for(const auto & f : freq){
            uniquefreq[f.second]++;
        }
        for(const int & num : nums){
            if(uniquefreq[freq[num]]==1){
                return num ; 
            }
        }
        return -1;  
    }
};