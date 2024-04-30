class Solution {
    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
public:
    string gcdOfStrings(string str1, string str2) {
        size_t index = 0;

        if (str1 + str2 != str2 + str1)
            return "";

        index = gcd(str1.length(), str2.length());

        return str1.substr(0, index);;
    }
};