### 1. Creating a Singly Linked List
- In this program, we're creating a singly linked list where we're inserting values/nodes at the beginning and displaying the list.
- Since every new node is inserted at the beginning, the latest input appears first in the list.

### 2. Insertion at the Beginning
- In this program, we're inserting a new node at the beginning of an already created singly linked list and displaying the updated list.

### 3. Insertion at Beginning or End

* In this program, we're inserting a new node into an already created singly linked list.
* The original linked list is displayed before performing the insertion.
* The user can choose whether to insert the new node **at the beginning or at the end**.
* The updated linked list is displayed after the insertion.

### 4. Insertion at a Specific Position

* In this program, we're inserting a new node into an already created singly linked list.
* The original linked list is displayed before performing the insertion.
* The user can enter the **value and position** where the new node should be inserted.
* The new node is inserted at the specified position by adjusting the `next` pointers.
* The updated linked list is displayed after the insertion.

### 5. Deletion from the Beginning

* In this program, we're deleting the first node from an already created singly linked list.
* The original linked list is displayed before performing the deletion.
* The first node is removed by moving the `head` pointer to the next node.
* The updated linked list is displayed after the deletion.

### 6. Deletion from the End

* In this program, we're deleting the last node from an already created singly linked list.
* The original linked list is displayed before performing the deletion.
* We traverse the list to find the last node and its previous node.
* The last node is deleted and the `next` pointer of the previous node is set to `NULL`.
* The updated linked list is displayed after the deletion.

### 7. Deletion at a Specific Position

* In this program, we're deleting a node from an already created singly linked list.
* The original linked list is displayed before performing the deletion.
* The user can enter the **position of the node** that needs to be deleted.
* The required node is deleted by adjusting the `next` pointer of the previous node.
* The updated linked list is displayed after the deletion.

### 8. Searching for an Element

* In this program, we're creating a singly linked list using separate functions.
* The user first enters the **number of nodes**, which tells the program how many nodes to create.
* The `createList()` function creates the list and returns the `head` pointer.
* The `displayList()` function displays the linked list.
* The user can enter a **value to search** in the list.
* The `searchElement()` function traverses the list and displays the **position** if the value is found.
* If the value is not found, a suitable message is displayed.
