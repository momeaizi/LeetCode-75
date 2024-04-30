class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (size_t i = 0; i < flowerbed.size() && n; ++i) {
            if (flowerbed[i] == 0) {
                if (i == flowerbed.size() - 1 or flowerbed[i + 1] == 0) {
                    if (i == 0 or flowerbed[i - 1] == 0) {
                        flowerbed[i] = 1;
                        --n;
                    }
                }
            }
        }

        return n == 0;
    }
};
