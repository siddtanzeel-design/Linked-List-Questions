class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

def createList():
    n = int(input("Enter number of nodes: "))

    head = None
    tail = None

    for i in range(n):
        value = int(input("Enter data: "))
        newNode = Node(value)

        if head is None:
            head = newNode
            tail = newNode
        else:
            tail.next = newNode
            tail = newNode

    return head

def display(head):
    curr = head

    while curr is not None:
        print(curr.val, end=" -> ")
        curr = curr.next

    print("NULL")

head = createList()
display(head)
