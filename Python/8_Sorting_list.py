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

def sortingList(head):
    if head is None:
        return head

    end = None

    while end != head:
        curr = head
        while curr.next != end:
            if curr.data > curr.next.data:
                curr.data, curr.next.data = curr.next.data, curr.data

            curr = curr.next

        end = curr

    return head

head = createList()
print("Original List")
display(head)

sortingList(head)
print("Sorted list")
display(head)