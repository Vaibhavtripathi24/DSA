class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin() + 1,nums.end());
        int first = nums[0];
        return (first + nums[1] + nums[2]);
        
    }
};