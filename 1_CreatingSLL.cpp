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
    Node* temp = NULL;
    Node* new_node;
    
    int n;
    cout<<"Enter number of nodes:- ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        new_node = new Node();
        cout<<"Enter Value:- ";
        cin>>new_node->data;

        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }

    cout<<"Linked List"<<endl;
    temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
