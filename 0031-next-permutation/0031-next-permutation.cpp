class Solution {
public:
    void nextPermutation(vector<int>& nums){
        int n = nums.size();
        int pivot = -1;
        for ( int r = n - 2 ; r >= 0 ; r--){
            if(nums[r] < nums[r+1]){
                pivot = r;
                break;
            }
        }
        
        if(pivot == -1){
            reverse(nums.begin() , nums.end()
            );
            return ;
        }
        
        for(int i = n - 1 ; i > pivot ; i--){
            if( nums[ pivot ] < nums[ i ]){
               swap(nums[ pivot ] , nums[ i ]);
               break;
            }
        }
        
        reverse(nums.begin() + pivot + 1 , nums.end());
        return;
    }
        
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna