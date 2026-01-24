class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>index(256,-1);
        int i = 0 ;
        int maxlen = 0 ;
        for(int j=0 ; j<s.size() ; j++){
            if(index[s [j] ]>=i){
                i = index[ s[j] ]+1;
            }
            index[ s[j] ] = j ;
            maxlen = max(maxlen , j-i+1 );
        }
        return maxlen;
    }
};