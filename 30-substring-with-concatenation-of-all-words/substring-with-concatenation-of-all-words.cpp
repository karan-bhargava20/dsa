class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        unordered_map<string , int> word_freq;
        for(auto word : words ){
            word_freq[word]++;
        }

        int word_len = words[0].size();
        int word_cnt = words.size();
        int conc_len = word_len * word_cnt;
        for(int start=0; start < word_len ; start++){
            unordered_map<string , int> conc_freq;
            int i  = start;
            int cnt = 0;
            for(int r = i ; r+word_len <=s.size() ; r+=word_len){
                string word = s.substr(r , word_len);
                if(word_freq.count(word)){
                    conc_freq[word]++;
                    cnt++;
                    while(conc_freq[word] > word_freq[word]){
                        conc_freq[ s.substr(i , word_len)]--;
                        i+= word_len;
                        cnt--;
                    }
                    if(cnt==word_cnt){
                        ans.push_back(i);
                    }
                }
                else{
                    conc_freq.clear();
                    cnt = 0;
                    i = r + word_len;
                }
            }
        }
        return ans;
    }
};