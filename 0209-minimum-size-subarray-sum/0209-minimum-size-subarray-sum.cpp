class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) { 
        int n = nums.size();
        vector<int>prefix(n);
        int ans = INT_MAX;
        for(int i=0 ; i<n ; i++){
            prefix[i] = (i==0) ? nums[0] : prefix[i-1] + nums[i];
           }
        for(int s = 0 ; s<n ; s++){ 
           int start = s;
           int e = -1 ;
           int end   = nums.size()-1;
           while(start<=end){
            int mid = start + (end - start)/2;
            int sum_arr_ele = (s==0) ? prefix[mid] : prefix[mid]-prefix[s-1];
            if(sum_arr_ele < target){
                start =  mid + 1;
            }
            else{
                e = mid ; 
                end = mid - 1;
            }
           }
           if(e!=-1) ans = min( e-s+1 , ans);
       }
       return (ans!=INT_MAX) ? ans : 0;         
    }           
    //     int s = 0;
    //     int min_len = INT_MAX;
    //     int sum_arr_ele = 0;
    //     for(int e = 0 ; e<nums.size() ; e++){
    //         sum_arr_ele += nums[e];
    //         while( sum_arr_ele >= target){ 
    //             min_len = min( min_len , e-s+1 );
    //             sum_arr_ele -= nums[s++];
    //         }
    //     }
    //     return (min_len != INT_MAX) ? min_len : 0 ;
    // }   
        
    };