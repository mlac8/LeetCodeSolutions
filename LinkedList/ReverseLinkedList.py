# time complexity: O(n)
# space complexity: O(1)
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev, curr = None, head # setting prev to "None" and current node to the head

        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        return prev