class Solution {
public:
    string makeFancyString(string s) {
         string ans = "";
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (!ans.empty() && ans.back() == s[i]) {
                count++;
            } else {
                count = 1;
            }
            if (count < 3) {
                ans += s[i];
            }
        }
        return ans;
        
    }
};