class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xr =  0;
        for(auto d : derived){
            xr ^=d;
        }
        if(xr==0){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna