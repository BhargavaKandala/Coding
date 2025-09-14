class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n = pizzas.size();
        sort(pizzas.begin(), pizzas.end());  // Step 1: Sort pizzas in ascending order
        int m = n/4;
        int oc = (m+1) /2;
        int ec = m - oc;
        
        long long total = 0;
        int l = n - 1;
        
        for(int i = 0; i < oc; i++){
            total += pizzas[l];
            l--;
        }
        for(int i = 0; i < ec; i++){
            l--;
            int sec = pizzas[l];
            l--;
            total += sec;
        }
        return total;
        
    }
};