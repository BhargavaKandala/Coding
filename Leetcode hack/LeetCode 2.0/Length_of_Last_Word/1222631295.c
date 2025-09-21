int lengthOfLastWord(char* s) {
    int count = 0;
    int i = strlen(s);
    while(i > 0 && s[i - 1] == ' '){
        i--;
    }
    while(i > 0 && s[i - 1] != ' '){
        count++;
        i--;
    }
    return count;
} 