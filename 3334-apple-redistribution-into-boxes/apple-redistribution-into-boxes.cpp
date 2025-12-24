class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int applesum = 0;
        for (int i = 0; i < apple.size(); i++) {
             applesum += apple[i];
            }
        sort(capacity.begin(), capacity.end());
        int boxes = 0;
        for (int i = capacity.size() - 1; i >= 0; i--) {
            applesum -= capacity[i];
            boxes++;
            if (applesum <= 0) break;
        }
        return boxes;
    }
};