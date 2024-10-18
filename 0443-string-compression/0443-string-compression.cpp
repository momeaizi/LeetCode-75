class Solution {
public:
    int compress(vector<char>& chars) {
        int fast = 1, slow = 0, count = 1;
        char    last = chars[0];

        for (; fast < chars.size() and slow <= fast; ++fast) {
            if (chars[fast] == last) {
                ++count;
            }
            else {
                chars[slow] = last;
                if (count > 1) {
                    string count_string = to_string(count);
                    for (int k = 0; k < count_string.length(); ++k) chars[++slow] = count_string[k];
                }
                ++slow;


                count = 1;
                
            }
            last = chars[fast];
        }
        chars[slow] = last;
        if (count > 1) {
            string count_string = to_string(count);
            for (int k = 0; k < count_string.length(); ++k) chars[++slow] = count_string[k];
        }

        ++slow;

        return slow;
    }
};