# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        
        if list1 == None:
            return list2
        if list2 == None:
            return list1
        
       
        current = dummy = ListNode()

        while (list1 != None) and (list2 != None):
           # current = current.next
            if list1.val >= list2.val:
                current.next = list2
                list2, current = list2.next, list2
            else:
                current.next = list1
                list1, current = list1.next, list1
            


        if list1 == None:
            current.next = list2
        else:
            current.next = list1

        return dummy.next

        


        

        