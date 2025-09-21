class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
         int totalWeight = 0, count = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if (totalWeight + w > maxWeight) {
                    return count;
                }
                totalWeight += w;
                count++;
            }
        }
        return count;
    }
};