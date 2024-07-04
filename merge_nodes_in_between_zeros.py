# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeNodes(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        dummy = ListNode(0)
        current = dummy
        first = head
        second = head.next
        sumBetween = 0
        while second:
            if second.val == 0:
                current.next = ListNode(sumBetween)
                current = current.next
                sumBetween = 0
            else:
                sumBetween += second.val

            second = second.next

        return dummy.next

        