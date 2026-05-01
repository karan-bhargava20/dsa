class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> res(n);
        int s = 0;
        int e = n-1;
        for(int i = 0 ; i<n  ; i++){
            if(nums[i]<pivot){
                res[s++]=nums[i];
            }
            if(nums[n-i-1]>pivot){
                res[e--]=nums[n-i-1];
            }
        } 
        while(s<=e){
            res[s++]=pivot;
        }
        return res;       
    }
};