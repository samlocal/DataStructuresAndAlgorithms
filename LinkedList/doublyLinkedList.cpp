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

    //destructor
    ~Node()
    {
        int value=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory free for data "<<value<<"\n";

    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    // creating node1
    if (head == NULL)
    {
        Node *node1 = new Node(d);
        head = node1;
        tail=node1;
    }
    else
    {
        // creating a new node
        Node *temp = new Node(d);

        // linking
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    // creating node1
    if (tail == NULL)
    {
        Node *node1 = new Node(d);
        tail = node1;
        head=node1;
    }
    else
    {

        // creating a new node for insertion
        Node *temp = new Node(d);

        // linking
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int d, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    // creating node
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNodeUsingPosition(Node *&head,Node *&tail,int pos)
{
    if(pos==1)
    {
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        
        Node *curr=head;
        Node *prev=NULL;

        int cnt=1;

        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
         
         curr->prev=NULL;
         prev->next=curr->next;
         curr->next=NULL;
         delete curr;

    }


}

int main()
{

    // Head and Tail
    Node *head = NULL;
    Node *tail = NULL;

    // Inserting at head

    insertAtHead(head, tail, 11);
    insertAtHead(head, tail, 112);
    insertAtHead(head, tail, 113);

    // Inserting at Tail

    insertAtTail(head, tail, 9);
    insertAtTail(head, tail, 99);
    insertAtTail(head, tail, 999);

    // printing
    print(head);

    cout << getLength(head) << "\n";

    cout << "Head data : " << head->data << "\n";
    cout << "Tail data : " << tail->data << "\n";

    insertAtPosition(head, tail, 100, 6);

    deleteNodeUsingPosition(head,tail,7);

    // printing
    print(head);

    cout << "Head data : " << head->data << "\n";
    cout << "Tail data : " << tail->data << "\n";
}