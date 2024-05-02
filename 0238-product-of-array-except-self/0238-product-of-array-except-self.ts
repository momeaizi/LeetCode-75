function productExceptSelf(nums: number[]): number[] {
    let prefix_prod: number = 1;
    let suffix_prod: number = 1;

    let prod: number[] = new Array(nums.length);

    for (let start: number = 0; start < nums.length; ++start) {
        prod[start] = prefix_prod;
        prefix_prod *= nums[start];
    }

    for (let end: number = nums.length - 1; end >= 0; --end) {
        prod[end] *= suffix_prod;
        suffix_prod *= nums[end];
    }

    return prod;
};