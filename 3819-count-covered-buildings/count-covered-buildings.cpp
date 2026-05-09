class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, int> rowMin, rowMax;
        unordered_map<int, int> colMin, colMax;
        for (auto &b : buildings) {
            int x = b[0];
            int y = b[1];
            if (!rowMin.count(x)) {
                rowMin[x] = rowMax[x] = y;
            } else {
                rowMin[x] = min(rowMin[x], y);
                rowMax[x] = max(rowMax[x], y);
            }
            if (!colMin.count(y)) {
                colMin[y] = colMax[y] = x;
            } else {
                colMin[y] = min(colMin[y], x);
                colMax[y] = max(colMax[y], x);
            }
        }
        int covered = 0;
        for (auto &b : buildings) {
            int x = b[0];
            int y = b[1];
            bool left  = y > rowMin[x];
            bool right = y < rowMax[x];
            bool up    = x > colMin[y];
            bool down  = x < colMax[y];
            if (left && right && up && down)
                covered++;
        }
        return covered;
    }
};