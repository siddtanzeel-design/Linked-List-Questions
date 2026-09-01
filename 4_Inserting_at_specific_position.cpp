#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* temp;
    Node* new_node;

    int n;
    cout<<"Enter number of node:- ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        new_node = new Node();

        cout<<"Enter data:- ";
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

    cout<<"Original Linked List"<<endl;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    int val, pos;
    cout<<"Enter the value to be inserted:- ";
    cin>>val;
    cout<<"Enter its position:- ";
    cin>>pos;

    new_node = new Node();
    new_node->data = val;
    new_node->next = NULL;

    if(pos == 1)
    {
        new_node->next = head;
        head = new_node;
    }
    else
    {
        temp = head;
        for(int i=1;i<pos-1;i++)
            temp = temp->next;

        new_node->next = temp->next;
        temp->next = new_node;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}
