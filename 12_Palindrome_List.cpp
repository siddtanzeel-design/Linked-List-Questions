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
bool palindromeList(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    int arr[count];
    temp = head;
    for(int i=0;i<count;i++)
    {
        arr[i] = temp->data;
        temp = temp->next;
    }

    for(int i=0;i<count/2;i++)
    {
        if(arr[i] != arr[count - 1 - i])
            return false;
    }
    return true;
}
int main()
{
    Node* head = NULL;

    head = createList(head);
    cout<<"Origninal Link List"<<endl;
    displayList(head);

    if(palindromeList(head) == true)
        cout<<"This is list is a Palindrome List."<<endl;
    else
        cout<<"Not a Palindrome List"<<endl;

    return 0;
}
