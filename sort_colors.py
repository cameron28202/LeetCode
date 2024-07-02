import heapq

class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        size = len(nums)
        pq = []
        for num in nums:
            heapq.heappush(pq, num)
        
        for i in range(size):
            nums[i] = heapq.heappop(pq)

        
