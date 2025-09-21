#include <iostream>
#include <algorithm>
#include <vector>
class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<int>selected_elements;
        
        for(int i = 0; i < grid.size(); i++){
            sort(grid[i].rbegin(), grid[i].rend());
            
            for(int j = 0; j < std::min(limits[i], (int)grid[i].size()); j++){
                selected_elements.push_back(grid[i][j]);
            }
        }
        sort(selected_elements.rbegin(), selected_elements.rend());
        
        long long maxSum = 0;
        for(int i = 0; i < std::min(k, (int)selected_elements.size()); i++){
            maxSum += selected_elements[i];
        }
      return maxSum;
    }
};