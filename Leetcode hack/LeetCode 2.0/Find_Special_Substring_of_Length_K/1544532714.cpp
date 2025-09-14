class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
         int n = s.length();
        if (n < k) return false; 

        for (int i = 0; i <= n - k; i++) {
            char ch = s[i]; 
            bool valid = true;

            for (int j = 1; j < k; j++) {
                if (s[i + j] != ch) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                if (i > 0 && s[i - 1] == ch) continue; 
                if (i + k < n && s[i + k] == ch) continue; 
                return true;
            }
        }

        return false;
    }
};