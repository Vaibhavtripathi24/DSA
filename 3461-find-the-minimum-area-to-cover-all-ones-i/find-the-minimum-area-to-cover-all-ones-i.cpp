class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int top = 1000, left = 1000;
        int bottom = -1, right = -1;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    if(i < top) top = i;
                      if(i > bottom) bottom = i;
                    if(j<left) left = j;
                    if(j > right) right = j;
                }
            }
        }

        return (bottom- top + 1) * (right - left+1);
    }
};