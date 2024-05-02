class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        string result;

        while (ss >> word) {
            words.push_back(word);
        }

        for (int i = words.size() - 1; i >= 0; --i) {
            result += words[i] + ((i != 0) ? " ": "");
        }

        return result;
    }
};