class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans ;
        sort(intervals.begin() , intervals.end());
        vector<int> pair(2,0) ;
        pair = intervals[0];
        int r = intervals.size();
        ans.reserve(r);
        for(int i = 1 ; i<r ; i++){
            if(pair[1]>=intervals[i][0]) {
                pair[1] = max(pair[1] , intervals[i][1]);
                }
            else{
                ans.push_back(pair);
                pair = intervals[i];
            }          
        }ans.push_back(pair);
        return ans ;
    }
};