class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

class Queue:
    def __init__(self):
        self.front = None
        self.rear = None

    def enqueue(self, data):
        new_node = Node(data)

        if self.rear is None:
            self.front = new_node
            self.rear = new_node
        else:
            self.rear.next = new_node
            self.rear = new_node

        print(data, "inserted into the queue")

    def dequeue(self):
        if self.front is None:
            print("Queue is Empty")
            return

        print(self.front.val, "removed from the queue")
        self.front = self.front.next

        if self.front is None:
            self.rear = None

    def display(self):
        if self.front is None:
            print("Queue is Empty")
            return

        current = self.front

        while current is not None:
            print(current.val, end=" -> ")
            current = current.next

        print("None")

q = Queue()

while True:
    print("\n1. Enqueue")
    print("2. Dequeue")
    print("3. Display")
    print("4. Exit")

    choice = int(input("Enter your choice (1, 2, 3, 4): "))

    if choice == 1:
        value = int(input("Enter Value: "))
        q.enqueue(value)

    elif choice == 2:
        q.dequeue()

    elif choice == 3:
        q.display()

    elif choice == 4:
        print("Program Terminated")
        break

    else:
        print("Invalid Choice")
