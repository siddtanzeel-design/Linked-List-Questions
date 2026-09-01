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
    cout<<"Enter number of node: ";
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
    cout<<"Original Linked List"<<endl;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;

    cout<<"Updated Linked List"<<endl;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}
