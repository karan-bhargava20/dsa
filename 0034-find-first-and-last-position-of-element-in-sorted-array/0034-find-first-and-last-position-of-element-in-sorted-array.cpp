class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        
        while(s <= e){
            int mid = s + (e - s)/2;
            
            if(nums[ mid ] == target){
                int l = mid ;
                int r = mid ;
                while(l > 0 && nums[ l - 1 ] == nums[ l ]){
                    l--;
                }
                while(r < nums.size() - 1 && nums[ r ] == nums[ r + 1 ]){
                    r++;  
                    }
                return{ l, r };
            }else if(nums[ mid ] < target ){ 
                s = mid + 1 ;
            }else if(nums[ mid ] > target ){
                e = mid - 1 ;
            }
        } 
        return{ -1 , -1} ;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna