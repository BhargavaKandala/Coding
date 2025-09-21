#include <vector>
#include <algorithm>

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int placed = 0 , count = 0;
        if(fruits.size() == 1 && baskets.size() == 1){
            if(fruits[0] <= baskets[0]){
                return 0;
            }
            else return 1;
        }
        
        for(int i = 0; i < fruits.size(); i++){
            for(int j = 0; j < baskets.size(); j++){
                if(fruits[i] <= baskets[j]){
                    placed = 1;
                    baskets[j] = -1;
                    break;
                }
            }
            if(!placed) count++;
                placed = 0;
        }
        return count;
    }
};