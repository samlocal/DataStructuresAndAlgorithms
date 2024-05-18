#include <iostream>
using namespace std;

// Implementation of Node
class Node
{
public:
    int data;
    Node *next;

    // Consructor to initialize the Node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor for freeing memory
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freeed for data " << value << "\n";
    }
};

void insertAtHead(Node *&head, int d)
{
    // creating node for insertion
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // creating a new node for insertion
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int d, int pos)
{
    // if insertion at 1st position
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;

    // create a node to insert
    Node *nodeToInsert = new Node(d);

    // reaching to position-1 place
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // if insertion at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deletionUsingPosition(Node *&head, int pos)
{
    // Deleting starting node
    if (pos == 1)
    {
        Node *temp = head;

        // head pointing to next position
        head = head->next;

        // Deleting memeory
        temp->next=NULL;
        delete temp;
    }
    else
    { // Deleting any middele node or last node
        int cnt = 1;
        Node *prev = NULL;
        Node *curr = head;

        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        
        curr->next=NULL;
        delete curr;
    }
}

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

int main()
{
    // creating a node1 or first node
    Node *node1 = new Node(4);

    // Making first node as head and tail
    Node *head = node1;
    Node *tail = node1;

    // Inserting at head
    insertAtHead(head, -1);
    insertAtHead(head, 2);

    // Inserting at Tail
    insertAtTail(tail, 44);
    insertAtTail(tail, 442);

    insertAtPosition(head, tail, 333, 6);

    cout << tail->data << "\n";
    cout << head->data << "\n";

    // printing
    print(head);

    deletionUsingPosition(head, 1);

    // printing
    print(head);
}