class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int pre = 0;
        int cur = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            cur++;
            if (i == n - 1 || nums[i] >= nums[i + 1]) {
                if (cur / 2 >= k) return true;
                if (min(pre, cur) >= k) return true;
                
                pre = cur;
                cur = 0;               
            }
        }
        return false;
    }
};
