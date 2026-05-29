class Solution {
public:
    int countTriplets(vector<int>& arr) {

        unordered_map<int,int>cnt;
        unordered_map<int,int>total;

        int xr = 0;
        int ans = 0;

        cnt[0] = 1;
        total[0] = 0;

        for(int i = 0; i < arr.size(); i++) {

            xr ^= arr[i];

            if(cnt.count(xr)) {
                ans += cnt[xr] * i - total[xr];
            }

            cnt[xr]++;
            total[xr] += i + 1;
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna