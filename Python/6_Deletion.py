class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def createList():
    head = None
    tail = None

    n = int(input("Enter number of nodes: "))

    for i in range(n):
        val = int(input("Enter data: "))
        new_node = Node(val)

        if head is None:
            head = new_node
            tail = new_node
        else:
            tail.next = new_node
            tail = new_node

    return head

def display(head):
    curr = head

    while curr is not None:
        print(curr.data, end=" -> ")
        curr = curr.next

    print("None")

def deletion(head):
    pos = int(input("Enter position to delete: "))

    if head is None or pos < 1:
        print("Invalid Input")
        return head

    if pos == 1:
        head = head.next
        return head

    curr = head
    c = 1
    while c < pos - 1 and curr is not None:
        curr = curr.next
        c += 1

    if curr is None or curr.next is None:
        print("Out of range")
        return head

    delete_node = curr.next
    curr.next = delete_node.next
    del delete_node

    return head


head = createList()
print("Original Linked List")
display(head)

deletion(head)
print("After deletion")
display(head)