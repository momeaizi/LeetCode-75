class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>   num_frequency;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>  top_k_frequent;
        vector<int>                     ans(k);

        for (int i = 0; i < nums.size(); ++i) num_frequency[nums[i]]++;

        for (auto &num_freq: num_frequency) {
            if (top_k_frequent.size() < k)
                top_k_frequent.push({num_freq.second, num_freq.first});
            else if (num_freq.second >= top_k_frequent.top().first) {
                top_k_frequent.pop();
                top_k_frequent.push({num_freq.second, num_freq.first});
            }
        }

        for (int i = 0 ; i < k and !top_k_frequent.empty(); ++i) {
            ans[i] = top_k_frequent.top().second;
            top_k_frequent.pop();
        }

        return ans;
    }
};