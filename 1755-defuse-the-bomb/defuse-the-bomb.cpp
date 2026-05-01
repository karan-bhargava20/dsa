class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        int n = code.size();
        int sum = 0;

        if(k==0){
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
        }
        else if(k>0){
           for(int i = 0 ; i<k ; i++){
            sum += code[i];
            }
            for(int i = 0 ; i<n ; i++){
            sum = sum - code[i] + code[(i+k)%n];
            ans.push_back(sum);
            }
        }
        else {
            for(int i=n+k ; i<n ; i++){
                sum = sum+code[i];
            }
            ans.push_back(sum);
            for(int i = 1 ; i<n ; i++){
                sum = sum + code[i-1] - code[(n+k+i-1)%n];
                ans.push_back(sum);
            }
        }
        return ans;
    }
        
};