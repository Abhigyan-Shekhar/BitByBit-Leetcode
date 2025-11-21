# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseBetween(self, head, left, right):
        
        nodes = []
        curr = head
        pos = 1
        
        while curr:
            if left <= pos <= right:
                nodes.append(curr)
            curr = curr.next
            pos += 1
        
        
        i, j = 0, len(nodes) - 1
        while i < j:
            nodes[i].val, nodes[j].val = nodes[j].val, nodes[i].val
            i += 1
            j -= 1
        
        return head
