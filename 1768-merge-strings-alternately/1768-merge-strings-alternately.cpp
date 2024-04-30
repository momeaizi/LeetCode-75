class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int i = 0;
    string merged = "";

    for (; i < word1.length() && i < word2.length(); ++i) {
        merged += word1[i];
        merged += word2[i];
    }
    
    return merged + word1.substr(i) + word2.substr(i);
    }
};