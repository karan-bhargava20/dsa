class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll = 0;
        for (int i = 0; i < nums.size(); i++) {
            xorAll ^= nums[i];
        }
        long long diff = xorAll & -xorAll;
        int first = 0, second = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (diff & nums[i]) {
                first ^= nums[i];
            } else {
                second ^= nums[i];
            }
        }
        return {first, second};
    }
};
