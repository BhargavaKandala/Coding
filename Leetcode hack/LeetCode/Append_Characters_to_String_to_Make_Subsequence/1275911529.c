int appendCharacters(char* s, char* t) {
    int m = strlen(s);
    int n = strlen(t);
    int i = 0,j = 0;

    while(i < m && j < n){
        if(s[i] == t[j]) j++;
        i++;
    }
    return n - j;
}