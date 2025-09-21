char* reversePrefix(char* word, char ch) {
    for(int i = 0; i < strlen(word); i++){
        if(word[i] == ch){
            reverse_string(word , 0, i);
            break;
        }
    }
    return word;
}

void reverse_string(char *str, int first, int last) {
    while (first < last) {
        char temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        first++;
        last--;
    }
}