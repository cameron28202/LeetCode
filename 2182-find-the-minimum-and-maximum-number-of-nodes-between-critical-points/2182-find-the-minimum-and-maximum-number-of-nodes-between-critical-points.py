# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def nodesBetweenCriticalPoints(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: List[int]
        """

        if not head or not head.next or not head.next.next:
            return [-1, -1]

        prev = head
        curr = head.next

        ind = 1
        inds = []

        while curr.next:
            if (curr.val < prev.val and curr.val < curr.next.val) or (curr.val > prev.val and curr.val > curr.next.val):
                inds.append(ind)
            ind += 1
            prev = curr
            curr = curr.next
        
        if len(inds) < 2:
            return [-1, -1]
        
        min_dist = min(inds[i] - inds[i-1] for i in range(1, len(inds)))
        max_dist = inds[-1] - inds[0]
        
        return [min_dist, max_dist]