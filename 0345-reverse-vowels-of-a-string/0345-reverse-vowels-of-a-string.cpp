class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";

        while (start < end) {
            while (start < end && vowels.find(s[start]) == string::npos)
                ++start;
            while (start < end && vowels.find(s[end]) == string::npos)
                --end;

            const char temp = s[start];
            s[start++] = s[end];
            s[end--] = temp;
        }

        return s;
    }
};
