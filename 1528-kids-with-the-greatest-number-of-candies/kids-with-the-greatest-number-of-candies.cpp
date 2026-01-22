class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int num = *max_element(candies.begin(), candies.end())-extraCandies;
        vector<bool> ans;
        for(auto e:candies){
            if(e>=num){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }

};