
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int total = 0; // Initialize total perimeter
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] == 1) {
                    // Check the left side
                    if (j == 0 || grid[i][j-1] == 0) {
                        total++;
                    }
                    // Check the right side
                    if (j == grid[i].size() - 1 || grid[i][j+1] == 0) {
                        total++;
                    }
                    // Check the top side
                    if (i == 0 || grid[i-1][j] == 0) {
                        total++;
                    }
                    // Check the bottom side
                    if (i == grid.size() - 1 || grid[i+1][j] == 0) {
                        total++;
                    }
                }
            }
        }
        
        return total; 
    }
};
    
