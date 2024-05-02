class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        i: int = -1
        j: int = -1
        for k in range(len(nums)):
            if (i == -1 or nums[k] <= nums[i]):
                i = k
            elif (j == -1 or nums[k] <= nums[j]):
                j = k
            else:
                return True
        return False