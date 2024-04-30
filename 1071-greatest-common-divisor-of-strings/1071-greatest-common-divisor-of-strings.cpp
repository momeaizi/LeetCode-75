class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        size_t index = 0;

        if (str1 + str2 != str2 + str1)
            return "";

        for (size_t i = 0; i < min(str1.length(), str2.length()); ++i) {
            if (str1.length() % (i + 1) == 0 && str2.length() % (i + 1) == 0)
                index = i + 1;
        }

        return str1.substr(0, index);;
    }
};