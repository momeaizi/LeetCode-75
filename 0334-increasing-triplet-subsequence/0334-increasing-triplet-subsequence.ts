function increasingTriplet(nums: number[]): boolean {
    let i: number = -1, j: number = -1, k: number = 0;
    for (; k < nums.length; ++k) {
        if (i == -1 || nums[k] <= nums[i]) {
            i = k;
        } else if (j == -1 || nums[k] <= nums[j]) {
            j = k;
        } else {
            return true;
        }
    }
    return false;
};