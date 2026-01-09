class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for (char &c : s) {
            if (c == '6') {
                c = '9';
                break;
            }
        }
        int ans = 0;
        for (char c : s)
            ans = ans * 10 + (c - '0');
        return ans; 
    }
};