class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flip = 0;
        int i = 0;
        int j = 0;
        int maxLen = 0;
        int len;

        while (j < n) {
            if (nums[j] == 1) {
                j++;
            } 
            else { // nums[j] == 0
                if (flip < k) {
                    flip++;
                    j++;
                } 
                else { 
                    // flip == k
                    len = j - i;
                    maxLen = max(maxLen, len);

                    // move i forward to remove one zero
                    while (nums[i] == 1) i++;
                    // now nums[i] == 0
                    i++;
                    j++;
                }
            }
        }

        // After loop, final check
        len = j - i;
        maxLen = max(maxLen, len);

        return maxLen;
    }
};