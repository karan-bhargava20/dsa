class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char , int>map;
        int maxFreq = 0 ;
        int l = 0 ;
        int ans = 0;
       for(int r=0 ; r<s.size() ; r++){
        map[s[r]]++;
        maxFreq = max(maxFreq ,map[s[r]]);
        while(r-l+1 > k + maxFreq ){
            map[s[l]]--;
            l++;
        }
        ans = max(ans , r-l+1);
       }
       return ans;
    }
};