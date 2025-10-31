class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int m = nums.size();
        int n = m - 2;
        vector<int> result;
        result.reserve(2);
        vector<int> count(n, 0);

        for (int x : nums) {
            count[x]++;
            if (count[x] == 2) {
                result.push_back(x);
                if (result.size() == 2) 
                    break;
            }
        }

        return result;
        
    }
};