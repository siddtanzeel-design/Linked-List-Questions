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
void findMiddle(Node* head)
{
    int count = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if(count % 2 == 0)
    {
        temp = head;
        for(int i = 1; i < count / 2; i++)
            temp = temp->next;

        cout << "There are 2 middle nodes: ";
        cout << temp->data << " and " << temp->next->data << endl;
    }
    else
    {
        temp = head;
        for(int i = 1; i <= count / 2; i++)
            temp = temp->next;
        
        cout << "There is 1 middle node: ";
        cout << temp->data << endl;
    }
}
int main()
{
    Node* head = NULL;

    head = createList(head);
    cout<<"Origninal Link List"<<endl;
    displayList(head);

    findMiddle(head);
    
    return 0;
}
