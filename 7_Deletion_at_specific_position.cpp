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

    int pos;
    cout<<"Enter position to delete: ";
    cin>>pos;

    if(pos == 1)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        temp = head;
        for(int i=1;i<pos-1;i++)
            temp = temp->next;

        Node* delete_node = temp->next;
        temp->next = delete_node->next;
        delete delete_node;
    }

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
