class Solution {
private:
    bool check(string &s , int i , int j ,string &goal){
        int t = 0;
        for(int k = i ; k<=j ; k++){
            if(s[k] != goal[t++]) return false ;
        }
        return true ; 
    }
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        int j = n-1;
        int i = 0;
        s+=s;
        while(m==n && i<n){
            if(check(s,i++,j++,goal)){
                return true ;
            }
        }
        return false;
    }
};