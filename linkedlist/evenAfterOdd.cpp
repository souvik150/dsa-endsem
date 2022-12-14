#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


Node *evenAfterOdd(Node *head)
{
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node * temp = head;
    Node * oddHead = NULL;
    Node * oddTail = NULL;
    Node * evenHead = NULL;
    Node * evenTail = NULL;
    // Node * currNode = head;

    while(temp){

        if(temp->data%2==0){
            if(evenHead==NULL){
                evenHead = temp;
                evenTail = temp;
            }
            else{
                evenTail->next= temp;
                evenTail = evenTail->next;
            }
        }
        else {
            if(oddHead==NULL){
                oddHead = temp;
                oddTail = temp;
            }
            else{
                oddTail->next= temp;
                oddTail = oddTail->next;
            }
        }
        temp = temp->next;
    }

    if(evenHead==NULL&&oddHead!=NULL){
        oddTail->next=NULL;
        return oddHead;
    }
    if(oddHead==NULL&&evenHead!=NULL){
        evenTail->next=NULL;
        return evenHead;
    }
    else{
        oddTail->next=evenHead;
        evenTail->next=NULL;
        return oddHead;
    }
}


Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        head = evenAfterOdd(head);
        print(head);
    }
    return 0;
}
    