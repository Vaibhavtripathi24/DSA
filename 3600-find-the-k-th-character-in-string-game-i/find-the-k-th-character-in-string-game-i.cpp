class Solution {
public:
    char kthCharacter(int k) {
         string word = "a";
        while (word.size() < k) {
            string temp = "";
            for (char c : word) {
                char next = c + 1;
                if (next > 'z') next = 'a';
                temp += next;
            }
            word += temp;
        }
        return word[k - 1];
    }
};