class Solution {
private:
    void reverse(string &str ,int s,int e){
        e = e -1;
        while(s<e){
            swap(str[s++] , str[e--]);
        }
    }
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        while(i<n){
            while(j<n && s[j] != ' ' ){
            j++;
            }
            reverse(s , i , j);
            i = ++j;
        }
        return s ; 
    }
};