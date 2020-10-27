# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        if not head: 
            return None
        
        while head.next:
            head.val = 10**5 + 1
            head = head.next
            if head.val >= 10**5+1:
                return head
        return None