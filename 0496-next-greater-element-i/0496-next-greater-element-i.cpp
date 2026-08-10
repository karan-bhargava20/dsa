//496
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>mpp;
        int n = nums2.size()-1;
        for(int i = n; i>=0 ;i-- ){
            while(!s.empty() && nums2[i]>=s.top()){
                s.pop();
            }
            if(s.empty())mpp[nums2[i]] = -1;
            else{
                mpp[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
        vector<int>ans;
        for(auto key : nums1){
            ans.push_back(mpp[key]);
        }
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna