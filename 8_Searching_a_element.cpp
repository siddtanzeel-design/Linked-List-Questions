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
    cout<<"Link List"<<endl;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void searchElement(Node* head)
{
    Node* temp = head;

    int val;
    int pos = 1;

    cout<<"Enter Value: ";
    cin>>val;

    while(temp != NULL)
    {
        if(temp->data == val)
        {
            cout<<"Value found at "<<pos<<" position";
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout<<"Value is not present in the List";
}
int main()
{
    Node* head = NULL;

    head = createList(head);
    displayList(head);
    searchElement(head);

    return 0;
}
