class Solution {
public:
    int maxSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int n = nums.size();
        int mx = nums[n - 1];
        if (mx <= 0) return mx;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                if (i == 0 || nums[i] != nums[i - 1]) {
                    sum += nums[i];
                }
            }
        }
        return sum;
    }
};