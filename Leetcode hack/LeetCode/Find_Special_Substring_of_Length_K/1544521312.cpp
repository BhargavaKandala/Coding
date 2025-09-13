class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
         int n = s.length();
        if (n < k) return false; // If s is smaller than k, no valid substring can exist.

        for (int i = 0; i <= n - k; i++) {
            char ch = s[i]; // First character of the substring
            bool valid = true;

            // Check if all k characters are the same
            for (int j = 1; j < k; j++) {
                if (s[i + j] != ch) {
                    valid = false;
                    break;
                }
            }

            // Check the character before and after the substring (if they exist)
            if (valid) {
                if (i > 0 && s[i - 1] == ch) continue; // Check previous character
                if (i + k < n && s[i + k] == ch) continue; // Check next character
                return true;
            }
        }

        return false;
    }
};