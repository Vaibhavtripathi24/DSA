class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
            if (i >= k) {
                freq[nums[i - k]]--;
                if (freq[nums[i - k]] == 0)
                    freq.erase(nums[i - k]);
            }
            if (i >= k - 1) {
                vector<pair<int, int>> v;
                for (auto &it : freq) {
                    v.push_back({it.second, it.first});
                }
                sort(v.begin(), v.end(), [](auto &a, auto &b) {
                    if (a.first == b.first)
                        return a.second > b.second;
                    return a.first > b.first;
                });
                int sum = 0;
                for (int j = 0; j < min(x, (int)v.size()); j++) {
                    sum += v[j].first * v[j].second;
                }
                result.push_back(sum);
            }
        }
        return result;
    }
};