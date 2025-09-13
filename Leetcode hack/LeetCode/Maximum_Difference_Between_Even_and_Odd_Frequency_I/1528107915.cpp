class Solution {
public:
    int maxDifference(string s) {
        int freq[26] = {0};
        
          for (char c : s) {
            freq[c - 'a']++;
        }
        
        int min_even = INT_MAX;  // To track the minimum even frequency
        int max_odd = INT_MIN;
        
        for(int i = 0; i < 26; i++){
            if(freq[i] > 0){
                
                if(freq[i] %2 == 0){
                min_even = min(freq[i], min_even);
                }
            else{
                max_odd = max(max_odd, freq[i]);
                }
            }
        }
        
        if (min_even == INT_MAX) min_even = 0;     // No even frequency found
        if (max_odd == INT_MIN) max_odd = 0; 
        
        return max_odd - min_even;
    }
};