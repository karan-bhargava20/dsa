class Solution {
    int pivot_idx(vector<int>& nums){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int l = nums[n-1];
        int ans = 0;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(mid >0 && nums[mid-1] > nums[mid]){
                ans = mid;
                break;  
            }
            else if(nums[mid]>l){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans; 
    }
    int binary_search(vector<int> & nums , int s , int e , int target){
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                break;  
                }
            else if(nums[mid]>target){
                e = mid - 1 ;
            }
            else{
                s = mid + 1 ; 
            }
        }
        return ans ;
    }
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();    
        int pvt = pivot_idx(nums);
        if(nums[pvt]<= target && nums[n-1]>=target){
        return binary_search(nums , pvt , n-1 , target);
        }
        else{
        return binary_search(nums , 0 , pvt-1 , target);
        }
    }
};