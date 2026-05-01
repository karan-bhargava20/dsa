class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans(code.size(),0);
        if(k==0){
            return ans;
        }
        int sum = 0;
        int n = code.size();
        int s = 1;
        int e = k;
        if(k<0){
            k = -k;
            s = n-k;
            e = n-1;
        }
        for(int i=s ; i<=e ; i++){
            sum += code[i];
        }
        
        for(int i = 0 ; i<n ; i++){
            ans[i]=sum;
            sum-=code[s%n];
            s++;
            e++;
            sum+=code[e%n];
        }
        return ans;
    }
        
};