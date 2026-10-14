class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

def createList():
    head = None
    tail = None

    n = int(input("Enter number of nodes: "))
    
    for i in range(n):
        val = int(input("Enter Node Data: "))
        new_node = Node(val)

        if head is None:
            head = new_node
            tail = new_node

        else:
            new_node.next = head
            head.prev = new_node
            head = new_node

    return head

def display(head):
    curr = head
    
    while curr is not None:
        print(curr.data, end=" <-> ")
        curr = curr.next

    print("None")
    
head = createList()
display(head)
