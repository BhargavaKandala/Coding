class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int black_count = 0, ans = INT_MAX;
        
        // Step 1: Initialize the first window of size k
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'B') black_count++;
        }
        
        ans = k - black_count;  // Initial minimum recolors required
        
        // Step 2: Slide the window from index k to end
        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i - k] == 'B') black_count--; // Remove element going out of window
            if (blocks[i] == 'B') black_count++; // Add new element to window
            
            ans = min(ans, k - black_count); // Update the minimum recolors required
        }
        
        return ans;
    }
};
