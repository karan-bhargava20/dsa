class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        unordered_set<int> s;
        for(auto e:nums){
            if(s.find(e)!=s.end()){
                return 1;
            }
            else{
                s.insert(e);
            }
        }
        return 0;
    }
};