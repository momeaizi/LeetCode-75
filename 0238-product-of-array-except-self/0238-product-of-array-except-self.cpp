class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix_prod = 1;
        int suffix_prod = 1;

        vector<int> prod(nums.size());

        for (int start = 0; start < nums.size(); ++start) {
            prod[start] = prefix_prod;
            prefix_prod *= nums[start];
        }

        for (int end = nums.size() - 1; end >= 0; --end) {
            prod[end] *= suffix_prod;
            suffix_prod *= nums[end];
        }

        return prod;
    }
};
