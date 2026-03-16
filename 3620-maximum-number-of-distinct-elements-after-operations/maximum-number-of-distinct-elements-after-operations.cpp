class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long prev = LLONG_MIN;
        int ans = 0;
        for(int x : nums) {
            long long cur = min((long long)x + k, max((long long)x - k, prev + 1));
            if(cur > prev) {
                ans++;
                prev = cur;
            }
        }
        return ans;
    }
};