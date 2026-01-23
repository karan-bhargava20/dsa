class Solution {
private:
    char to__lowel(char c){
        char ch = c;
        // for uppercase
        if('A'<=ch && ch<='Z') {
            ch = ch-'A'+'a';
        }
        return ch;
    }
    bool isVowel(char c){
        c =  to__lowel(c);
        return c =='a'||c == 'e'||c == 'i'||c == 'o'||c == 'u';
    }
public:
    string reverseVowels(string str) {
        int s = 0;
        int e = str.size()-1;
        while(s<e){
            while(s<e && !isVowel(str[s]))s++;
            while(s<e && !isVowel(str[e]))e--;
            if(s<e){
            swap(str[s++],str[e--]);
            }
        }
        return str ; 
    }
};