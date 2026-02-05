class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l = 0;
        int ans = 0;
        if(k>arr.size()){
        k = k%arr.size();
        }
        int sum_sub_ary = 0;
        for (int r = 0 ; r<k; r++){
            sum_sub_ary += arr[r];
        }
        if(sum_sub_ary >= threshold * k){
            ans++;
        }
        for (int r = k; r<arr.size() ; r++){
            sum_sub_ary =  sum_sub_ary + arr[r] - arr[r-k];   
            if(sum_sub_ary >= threshold * k){
            ans++;
            }
        }
        return ans ; 
    }
};