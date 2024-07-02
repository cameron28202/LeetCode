import math

class Solution(object):
    def judgeSquareSum(self, c):
        """
        :type c: int
        :rtype: bool
        """
        left, right = 0, int(math.sqrt(c))

        while left <= right:
            sum = left**2 + right**2
            if sum == c:
                return True
            elif sum > c:
                right -= 1
            else:
                left += 1
        return False