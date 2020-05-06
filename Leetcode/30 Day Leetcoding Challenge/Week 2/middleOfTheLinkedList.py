# author: starkizard
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        c=0
        cur=head
        while cur!=None:
            c+=1
            cur=cur.next
        answer=c//2 +1
        while head!=None and answer-1>0:
            head=head.next
            answer-=1
        return head   
            