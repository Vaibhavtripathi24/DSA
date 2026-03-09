class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        for(string word : words) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            if(ans.empty()) {
                ans.push_back(word);
            } 
            else {
                string prev = ans.back();
                sort(prev.begin(), prev.end());
                if(prev != sortedWord)
                    ans.push_back(word);
            }
        }

        return ans;
    }
};