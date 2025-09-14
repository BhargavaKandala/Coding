class Solution {
public:
    int maxFreqSum(string s) {
      map<char, int> freqMap;

    for (char ch : s) {
        freqMap[ch]++;
    }

    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int maxVowelFreq = 0;
    int maxConsonantFreq = 0;

    // Check frequencies for vowels and consonants
    for (auto& entry : freqMap) {
        char ch = entry.first;
        int freq = entry.second;

        if (vowels.count(ch)) {
            maxVowelFreq = max(maxVowelFreq, freq);
        } else {
            maxConsonantFreq = max(maxConsonantFreq, freq);
        }
    }

    return maxVowelFreq + maxConsonantFreq;
    }
};