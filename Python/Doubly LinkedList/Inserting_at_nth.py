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
            tail.next = new_node
            new_node.prev = tail
            tail = new_node

    return head

def insertAtK(head):
    pos = int(input("Enter the position for Inserting: "))
    val = int(input("Enter data to insert: "))

    new_node = Node(val)

    if pos == 1:
        new_node.next = head

        if head is not None:
            head.prev = new_node

        head = new_node
    else:
        curr = head
        c = 1
        while curr is not None and c < pos - 1:
            curr = curr.next
            c += 1

        if curr is None:
            print("Invalid Position")
            return head

        new_node.next = curr.next
        new_node = curr

        if curr.next is not None:
            curr.next.prev = new_node

        curr.next = new_node

    return head
        

def display(head):
    curr = head

    while curr is not None:
        print(curr.data, end=" <-> ")
        curr = curr.next

    print("None")

head = createList()
display(head)
