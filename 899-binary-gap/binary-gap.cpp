class Solution {
public:
    int binaryGap(int n) {
        int l = -1, ans = 0;
        int i = 0;
        while (n != 0) {
            if (n & 1) {
                if (l>= 0)
                    ans = max(ans, i - l);
                l = i;
            }
            n>>= 1;
            i++;
        }
        return ans;  
    }
};