int maxDepth(char* s) {
    int ans = 0;
    int openBrackets = 0;
    int i;

    for (i = 0; i < strlen(s); i++) {
        char c = s[i];
        if (c == '(') {
            openBrackets++;
        } else if (c == ')') {
            openBrackets--;
        }

        ans = (ans > openBrackets) ? ans : openBrackets;
    }

    return ans;
}
