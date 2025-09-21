class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        //i need to calculate the largest in each array and maintain a variable which possess the maximum value out of all arrays

        //similarly i need another variable to keep track of the minimum of all arrays and 

        //i need to return the absolute diff of these two values
        int max_value = arrays[0].back();  
        int min_value = arrays[0][0]; 

        int max_dist = 0;
        for(int i = 1; i < arrays.size(); i++){

            max_dist = max(max_dist, abs(arrays[i].back() - min_value));
            max_dist = max(max_dist, abs(arrays[i][0] - max_value));
        
            // Update min_value and max_value
            min_value = min(min_value, arrays[i][0]);
            max_value = max(max_value, arrays[i].back());
        }

        return max_dist;
    }
};