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
int countingNode(Node* head)
{
    Node* temp = head;
    int count = 1;
    while(temp->next != NULL)
    {
        temp = temp->next;
        count ++;
    }
    return count;
}
int main()
{
    Node* head = NULL;

    head = createList(head);
    displayList(head);

    cout<<"Number of nodes persent in the list: "<<countingNode(head);

    return 0;
}
