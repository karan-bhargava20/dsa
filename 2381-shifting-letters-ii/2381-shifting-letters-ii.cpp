class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int m = shifts.size();
        vector<int>list(s.size()+1,0);
        string ans="";
        for(int row=0 ; row<m ; row++){
            int l=shifts[row][0] , r=shifts[row][1] , d=shifts[row][2];
            list[l] += (d) ? 1:-1;
            list[r+1] += (d) ? -1:1;
        }
        for(int i=1 ; i<s.size() ; i++){
            list[i] = ((list[i]  + list[i-1]) % 26 + 26) % 26;
        }
        for(int i=0 ; i<s.size() ; i++){
            ans += char((( list[i] + (s[i] - 'a')) % 26 + 26 ) % 26+ 'a');
        }
        return ans;
    }
};
