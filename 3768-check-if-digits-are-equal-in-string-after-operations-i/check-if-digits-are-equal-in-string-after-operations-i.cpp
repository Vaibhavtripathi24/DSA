class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.length() > 2) {
            vector<int> v;
            int n = s.length();
            for (int i = 0; i < n - 1; i++) {
                int sum = ((s[i] - '0') + (s[i+1] - '0')) % 10;
                v.push_back(sum);
            }
            s.clear();
            for (int x : v) s += char(x + '0');
        }
        return s[0] == s[1];
    }
}; 
