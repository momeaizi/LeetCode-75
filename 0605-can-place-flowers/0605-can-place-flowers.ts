function canPlaceFlowers(flowerbed: number[], n: number): boolean {
    for (let i: number = 0; i < flowerbed.length && n; ++i) {
        if (flowerbed[i] == 0) {
            if (i == flowerbed.length - 1 || flowerbed[i + 1] == 0) {
                if (i == 0 || flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    --n;
                }
            }
        }
    }

    return n == 0;
};
