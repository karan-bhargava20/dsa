class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str = "";
        int maxi = 0;
        int i = 0;
        for(int j = 0 ; j<s.size() ; j++){
            char ch = s[j];
            while(str.find(ch,i)!=string::npos){
                maxi = max(maxi , j-i);
                i++;
            }
            str.push_back(ch);
        }
        return maxi;
    }
};