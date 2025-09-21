int longestPalindrome(char* s) {
    int count[128] = {0};
    int length = 0;
    int i;
    
    // Count the frequency of each character
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;
    }
    
    int odd_found = 0;
    
    // Calculate the length of the longest palindrome
    for (i = 0; i < 128; i++) {
        if (count[i] % 2 == 0) {
            length += count[i];
        } else {
            length += count[i] - 1;
            odd_found = 1;
        }
    }
    
    // If there is any character with an odd count, we can place one in the center
    if (odd_found) {
        length++;
    }
    
    return length;

}