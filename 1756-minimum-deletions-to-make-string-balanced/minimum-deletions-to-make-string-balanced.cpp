class Solution {
public:
    int minimumDeletions(string s) {
        int count = 0;
        int del = 0;

        for(int i = 0; i < s.length(); i++) {
          char c = s[i];
            if(c == 'b') {
                count++;
            } else {
                del = min(del+ 1, count);
            }
        }
        return del;
        
    }
};