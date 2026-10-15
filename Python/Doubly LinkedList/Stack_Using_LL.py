
class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

class Stack:
    def __init__(self):
        self.top = None

    def push(self, data):
        new_node = Node(data)
        new_node.next = self.top
        self.top = new_node
        print(data, "pushed into the stack")

    def pop(self):
        if self.top is None:
            print("Stack Underflow")
            return

        print(self.top.data, "popped from stack")
        self.top = self.top.next

    def peek(self):
        if self.top is None:
            print("Stack is Empty")
        else:
            print("Top element:", self.top.data)

    def display(self):
        if self.top is None:
            print("Stack is empty")
            return

        current = self.top

        while current is not None:
            print(current.data, end=" -> ")
            current = current.next

        print("None")


s = Stack()

while True:
    print("\n1. Push")
    print("2. Pop")
    print("3. Peek")
    print("4. Display")
    print("5. Exit")

    choice = int(input("Enter Your Choice (1, 2, 3, 4, 5): "))

    if choice == 1:
        value = int(input("Enter Value: "))
        s.push(value)

    elif choice == 2:
        s.pop()

    elif choice == 3:
        s.peek()

    elif choice == 4:
        s.display()

    elif choice == 5:
        print("Program Terminated")
        break

    else:
        print("Invalid Choice")