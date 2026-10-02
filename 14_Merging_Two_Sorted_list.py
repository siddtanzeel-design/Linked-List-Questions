class Node:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def MergeTwoList(self, l1, l2):
        dummy = Node(0)
        curr = dummy

        while l1 and l2:
            if l1.val < l2.val:
                curr.next = l1
                l1 = l1.next
            else:
                curr.next = l2
                l2 = l2.next

        curr = curr.next
        curr.next = l1 or l2

        return dummy.next

def createList(List):
    head = None
    tail = None

    for value in List:
        new_Node = Node(value)

        if head is None:
            head = new_Node
            tail = new_Node
        else:
            tail.next = new_Node
            tail = new_Node

    return head

def printList(head):
    while head:
        print(head.val, end=" ")
        head = head.next

#Main-Function
List1 = list(map(int, input("Enter numbers for List 1: ").split()))
List2 = list(map(int, input("Enter numbers for List 2: ").split()))

l1 = createList(List1)
l2 = createList(List2)

solution = Solution()
result = solution.MergeTwoList(l1, l2)

print("Merge List: ")
printList(result)
