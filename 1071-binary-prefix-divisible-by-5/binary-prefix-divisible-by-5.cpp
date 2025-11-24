class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int mod = 0;
        for (int x : nums)
            ans.push_back((mod = (mod * 2 + x) % 5) == 0);
        return ans;
    }
};