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
    Node* new_node;
    
    int n;
    cout<<"Enter number of nodes:- ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        new_node = new Node();

        cout<<"Enter value:- ";
        cin>>new_node->data;

        new_node->next = head;
        head = new_node;
    }

    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}
