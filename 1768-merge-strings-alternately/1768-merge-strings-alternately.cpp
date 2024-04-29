class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = string(word1.length() + word2.length(), ' ');

        int i = word1.length() - 1, j = word2.length() - 1, k = merged.length() - 1;

        while (k >= 0) {
            if (j >= word1.length()) {
                merged[k--] = word2[j--];
            }
            else if (i >= word2.length()) {
                merged[k--] = word1[i--];
            }
            else {
                if (j >= 0)
                    merged[k--] = word2[j--];
                if (i >= 0)
                    merged[k--] = word1[i--];
                cout << merged << endl;
            }
        }

        return merged;
    }
};