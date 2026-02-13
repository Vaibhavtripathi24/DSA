class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        vector<bool> visited(n, false);
        int maxFreq = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;

            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                    visited[j] = true;
                }
            }
            maxFreq = max(maxFreq, count);
        }
        fill(visited.begin(), visited.end(), false);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                    visited[j] = true;
                }
            }
            if (count == maxFreq)
                ans += count;
        }
        return ans;
    }
};