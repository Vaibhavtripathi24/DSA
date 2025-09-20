class Solution {
public:
    set<vector<int>> st;

    void solve(vector<int>& nums, int idx, vector<int>& temp) {
        if (idx == nums.size()) {
            st.insert(temp); 
            return;
        }

        solve(nums, idx + 1, temp);

        temp.push_back(nums[idx]);
        solve(nums, idx + 1, temp);
        temp.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        solve(nums, 0, temp);

        return vector<vector<int>>(st.begin(), st.end());
    }
};
