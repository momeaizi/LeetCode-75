class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = string(word1.length() + word2.length(), ' ');

        for (size_t i = 0, j = 0; i < word1.length() || i < word2.length(); ++i) {
            if (i < word1.length()) {
                result[j++] = word1[i];
            }
            if (i < word2.length()) {
                result[j++] = word2[i];
            }
        }

        return result;
    }
};