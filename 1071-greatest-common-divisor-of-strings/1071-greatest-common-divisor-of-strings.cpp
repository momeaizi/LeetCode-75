class Solution {

public:
    string gcdOfStrings(string str1, string str2) {
        size_t index = 0;

        if (str1 + str2 != str2 + str1)
            return "";

        index = gcd(str1.length(), str2.length());

        return str1.substr(0, index);;
    }
};