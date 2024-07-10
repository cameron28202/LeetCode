class Solution(object):
    def minOperations(self, logs):
        """
        :type logs: List[str]
        :rtype: int
        """
        
        dist = 0
        for operation in logs:
            if operation == "../" and dist > 0:
                dist -= 1
            if "./" not in operation:
                dist += 1
        return dist
