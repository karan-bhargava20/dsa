class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>map;
        int start = 0;
        for(auto c : t){
            map[c]++;
        }
        int t_len = 0;
        int min_len = INT_MAX;
        int l = 0 ;
        for(int r = 0 ; r<s.size() ; r++){

            if(map[s[r]]>0){
                t_len++;
            }

            map[s[r]]--;

            while(t_len == t.size()){
                if( r-l+1 < min_len ){
                    start = l;
                    min_len = r-l+1;
                }
                map[s[l]]++;
                if(map[s[l]]>0){
                    t_len--;
                }
                l++;
            }
        }
            return (min_len!=INT_MAX) ? s.substr(start,min_len):"";
    }
};