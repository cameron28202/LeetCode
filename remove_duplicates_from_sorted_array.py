class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ind, border = 1, len(nums)-1
        while ind <= border:
            if nums[ind] == nums[ind-1]:
                nums.pop(ind)
                nums.append(ind)
                border -= 1
            else:
                ind += 1

        return border + 1

        