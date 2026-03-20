class Solution {
public:
    bool isBalanced(int num) {
        vector<int> count(10, 0);
        while (num > 0) {
            count[num % 10]++;
            num /= 10;
        }
        for (int d = 0; d <= 9; d++) {
            if (count[d] != 0 && count[d] != d)
                return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        int num = n + 1;
        
        while (true) {
            if (isBalanced(num))
                return num;
            num++;
        }
    }
};