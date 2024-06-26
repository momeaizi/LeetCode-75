class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = *max_element(candies.begin(), candies.end());
        vector<bool> result(candies.size());

        for (size_t i = 0; i < candies.size(); ++i) {
            if (candies[i] + extraCandies >= greatest) result[i] = true;
        }

        return result;
    }
};