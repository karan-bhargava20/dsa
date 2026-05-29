class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int>arr(n + 1 , 0 );
        arr[0] = first;

        for(int i = 0 ; i < n ; i++){
            arr[i + 1] = arr[i] ^ encoded[i] ;
        }
        
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna