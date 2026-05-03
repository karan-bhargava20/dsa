class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_len = s.size() , p_len = p.size();
        if(s_len <p_len) return {};

        vector<int>freq(26,0);
        vector<int>ans;

        for(int i=0 ; i<p_len ; i++){
            freq[p[i]-'a']--;
        }
        int req_len = 0;
        int left = 0;
        for(int right = 0 ; right<s_len ; right++){
            if(freq[s[right]-'a']<0){
                req_len++;
            }
            freq[s[right]-'a']++;
            if(right-left+1 == p_len){
                if(req_len == p_len){
                    ans.push_back(left);
                }
                if(freq[s[left]-'a']<=0){
                req_len--;
            }
                freq[s[left]-'a']--;
                left++;
            }
        }
        return ans;
    }
};