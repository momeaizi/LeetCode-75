class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i = -1, j = -1, k = 0;
        for (; k < nums.size(); ++k) {
            if (i == -1 or nums[k] <= nums[i]) {
                i = k;
            } else if (j == -1 or nums[k] <= nums[j]) {
                j = k;
            } else {
                return true;
            }
        }
        return false;
    }
};