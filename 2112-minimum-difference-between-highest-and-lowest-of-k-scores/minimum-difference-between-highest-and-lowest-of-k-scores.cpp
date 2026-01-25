class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size()==1 || nums.size()==0) return 0;
        int n = nums.size();
        int diff = INT_MAX;
        sort(nums.begin(), nums.end());
        for (int i = 0; i + k - 1 < nums.size(); i++) {
            diff = min(diff, nums[i + k - 1] - nums[i]);
        }
        return diff;
        
    }
};