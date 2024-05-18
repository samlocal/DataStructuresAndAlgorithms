#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int d)
    {
        this->prev = NULL;
        this->data = d;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

int getLength(Node *&head)
{
    Node *temp=head;
    int length=0;

    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;
}

void insertAtHead(Node *&head , int d)
{
    //creating a new node
    Node *temp=new Node(d);

    //linking
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node *&tail , int d)
{
    //creating a new node for insertion
    Node *temp=new Node(d);

    //linking
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

int main()
{
    Node *node1 = new Node(10);

    //Head and Tail
    Node *head = node1;
    Node *tail=node1;

    
    //Inserting at head

    insertAtHead(head , 11);
    insertAtHead(head , 112);
    insertAtHead(head , 113);

    //Inserting at Tail

    insertAtTail(tail,9);
    insertAtTail(tail,99);
    insertAtTail(tail,999);



    

    //printing
    print(head);

    cout<<getLength(head)<<"\n";

    cout<<"Head data : "<<head->data<<"\n";
    cout<<"Tail data : "<<tail->data<<"\n";




}