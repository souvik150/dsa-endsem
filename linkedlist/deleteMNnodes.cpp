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
Node *skipMdeleteN(Node *head, int M, int N)
{
    if(head==NULL||M==0){
        return NULL;
    }
    if(N==0){
        return head;
    }

    int count1=1;
    int count2=1;

    Node * temp1 = head;
    Node * temp2 = head;

    while(temp1 && temp2){

        while(count1<M && temp1 != NULL){
            temp1 = temp1->next;
            count1++;
        }
        if(temp1==NULL){
            return head;
        }
        temp2 = temp1->next;

        while(count2<N && temp2 !=NULL){
            temp2 = temp2->next;
            count2++;
        }
        if(temp2==NULL){
            temp1->next=NULL;
            return head;
        }
        temp1->next = temp2->next;

        temp1=temp2->next;
        temp2=temp2->next;
        count1 = 1;
        count2 = 1;

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
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    }
    return 0;
}
