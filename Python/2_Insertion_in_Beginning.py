class Node:
    def __init__(self, data):
        self.data = data
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
            newNode.next = head
            head = newNode

    return head

def display(head):
    temp = head
    while temp is not None:
        print(temp.data, end=" -> ")
        temp = temp.next

    print("NULL")

head = createList()
display(head)
