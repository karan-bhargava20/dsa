class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long int  num = 0;
        string s = "";
        vector<int> b;
        for(auto digit:digits){
            s+=to_string(digit);
        }
        num = stoi(s)+1;
        s = to_string(num);
        b.reserve(s.size());
        for(auto ele:s){
            b.push_back(ele -'0');
        }
        return b;
    }
};