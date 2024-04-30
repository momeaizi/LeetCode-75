function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
    const greatest: number = Math.max(...candies);
    let result: boolean[] = new Array(candies.length);

    for (let i: number = 0; i < candies.length; ++i) {
        if (candies[i] + extraCandies >= greatest) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    return result;
};
