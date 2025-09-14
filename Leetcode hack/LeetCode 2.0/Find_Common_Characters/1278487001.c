/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** commonChars(char ** words, int wordsSize, int* returnSize){
 int min_freq[26];
    for (int i = 0; i < 26; ++i) {
        min_freq[i] = INT_MAX;
    }

    for (int i = 0; i < wordsSize; ++i) {
        int freq[26] = {0};
        for (char *c = words[i]; *c != '\0'; ++c) {
            freq[*c - 'a']++;
        }
        for (int j = 0; j < 26; ++j) {
            if (freq[j] < min_freq[j]) {
                min_freq[j] = freq[j];
            }
        }
    }

    *returnSize = 0;
    for (int i = 0; i < 26; ++i) {
        *returnSize += min_freq[i] == INT_MAX ? 0 : min_freq[i];
    }

    // Allocating memory for the result array
    char **result = (char **)malloc((*returnSize) * sizeof(char *));
    int k = 0;
    for (int i = 0; i < 26; ++i) {
        while (min_freq[i]-- > 0) {
            result[k] = (char *)malloc(2 * sizeof(char));
            result[k][0] = 'a' + i;
            result[k][1] = '\0';
            k++;
        }
    }

    return result;
}