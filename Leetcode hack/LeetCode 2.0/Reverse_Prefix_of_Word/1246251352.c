char* reversePrefix(char* word, char ch) {
    int first = 0, last = 0;
    for(int i = 0; i < strlen(word); i++){
        if(word[i] == ch){
            last = i;
            break;
        }
    }
     while (first < last) {
        char temp = word[first];
        word[first] = word[last];
        word[last] = temp;
        first++;
        last--;
    }
    return word;
}
