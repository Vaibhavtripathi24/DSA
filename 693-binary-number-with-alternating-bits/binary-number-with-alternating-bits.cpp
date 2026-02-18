class Solution {
public:
    bool hasAlternatingBits(int n) {
         int prev = n & 1;
        while (n > 0) {
            n = n >> 1;
            int curr = n & 1;
            if (curr == prev)
                return false;
            prev = curr;
        }
        return true;
        
    }
};