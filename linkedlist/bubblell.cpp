//bubble sort iterative
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

Node* bubbleSort(Node* head)
{
    Node * i=head;

    while(i){
        Node *j=head;
        Node *prev=head;
        while(j->next){
            Node* temp=j->next;
            if(j->data>temp->data){
                if(j==head){
                    j->next=temp->next;
                    temp->next=j;
                    prev=temp;
                    head=prev;
                }
                else{
                    j->next=temp->next;
                    temp->next=j;
                    prev->next=temp;
                    prev=temp;
                }
                continue;
            }
            prev=j;
            j=j->next;

        }
        i=i->next;
    }
    return head;
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
    Node *head = takeinput();
    head = bubbleSort(head);
    print(head);
}
