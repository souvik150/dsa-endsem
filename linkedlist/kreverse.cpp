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

Node* revelist(Node *head){

    if(head==NULL)
        return NULL;
    if(head->next==NULL)
        return head;

    Node *prev=head;
    Node *cur=head->next;
    prev->next=NULL;
    while(cur){
        Node *temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }

    return prev;

}

int getLenght(Node* head){
    int c=0;
    while(head){
        head=head->next;
        c++;
    }
    return c;
}

Node* kReverse(Node*head,int n)
{
    //write your code here
    if(head==NULL)
        return NULL;
    int count=0;

    Node* front=head;
    Node* tail=head;
    Node* newHead;

    for(int i=1;i<n;i++){
        if(tail->next==NULL)
            break;
        else
            tail=tail->next;
    }
    Node *newtail=front;
    Node *temp=tail->next;
    tail->next=NULL;
    newHead=revelist(front);

    Node* ans=kReverse(temp,n);
    newtail->next=ans;
    return newHead;

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
        int k;
        cin >> k;
        head = kReverse(head, k);
        print(head);
    }

    return 0;
}
