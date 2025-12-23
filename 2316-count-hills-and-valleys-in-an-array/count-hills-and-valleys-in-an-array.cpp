class Solution {
public:
    int countHillValley(vector<int>& nums) {
         int count = 0;
        int prev = 0;
        for (int i = 1; i + 1 < nums.size(); ++i) {
            if (nums[i] == nums[i + 1]) continue;
            
            if (nums[i]>nums[prev] && nums[i]>nums[i + 1]) count++;
            if (nums[i]<nums[prev] && nums[i]<nums[i + 1]) count++;
            prev = i;
        }
        return count;
    }
};