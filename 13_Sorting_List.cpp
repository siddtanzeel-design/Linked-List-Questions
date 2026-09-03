#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* createList(Node* head)
{
    Node* temp;
    Node* new_node;

    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        new_node = new Node();

        cout<<"Enter data: ";
        cin>>new_node->data;
        new_node->next = NULL;

        if(head == NULL)
            head = new_node;
        else
        {
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = new_node;
        }
    }

    return head;
}

void displayList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

Node* mergeList(Node* left, Node* right)
{
    Node dummy;
    Node* temp = &dummy;

    while(left != NULL && right != NULL)
    {
        if(left->data < right->data)
        {
            temp->next = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }

    if(left != NULL)
        temp->next = left;
    else
        temp->next = right;

    return dummy.next;
}

Node* SortingList(Node* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* right = slow->next;
    slow->next = NULL;

    Node* left = SortingList(head);
    right = SortingList(right);

    return mergeList(left, right);
}

int main()
{
    Node* head = NULL;

    head = createList(head);

    cout<<"Original Linked List"<<endl;
    displayList(head);

    head = SortingList(head);

    cout<<"Sorted Linked List"<<endl;
    displayList(head);

    return 0;
}
