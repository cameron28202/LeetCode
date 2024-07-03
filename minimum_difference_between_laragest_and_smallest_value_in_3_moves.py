class Solution(object):
    def minDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums_size = len(nums)

        if nums_size <= 4:
            return 0

        nums.sort()

        min_diff = float("inf")

        for left in range(4):
            right = nums_size - 4 + left
            min_diff = min(min_diff, nums[right] - nums[left])

        return min_diff

        