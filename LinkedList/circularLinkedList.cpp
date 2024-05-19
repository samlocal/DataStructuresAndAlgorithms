#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {

            delete next;
            next = NULL;
        }
        cout << "Memory freeed for " << value << "\n";
    }
};

void insertAfterTheParticularData(Node *&tail, int ele, int d)
// Assuming that the element is present in the list
{
    if (tail == NULL) // empty list
    {
        Node *newNode = new Node(d);
        tail = newNode;
        tail->next = tail; // if any error see here
    }
    else
    { // non empty
        Node *curr = tail;

        while (curr->data != ele)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNodeUsingValue(Node *&tail, int val)
{
    if (tail == NULL)
    {
        cout << "List is Empty\n";
        return;
    }
    else
    { // non empty case

        // assuming value is present

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        //1 case
        if(curr==prev)
        {
            tail=NULL;
        }

        //>=2 case
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&tail)
{
    if(tail==NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    Node *temp = tail;

    do
    {

        cout << temp->data << " ";
        temp = temp->next; // chech here
    } while (temp != tail);
}
int main()
{
    Node *tail = NULL;

    insertAfterTheParticularData(tail, 5, 3);
    print(tail);

    cout << "\n";

    insertAfterTheParticularData(tail, 3, 5);
    print(tail);

    cout << "\n";

    insertAfterTheParticularData(tail, 5, 7);
    print(tail);

    cout << "\n";

    insertAfterTheParticularData(tail, 7, 9);
    print(tail);

    cout << "\n";

    insertAfterTheParticularData(tail, 5, 6);
    print(tail);

    cout << "\n";
    insertAfterTheParticularData(tail, 9, 10);
    print(tail);

    cout << "\n";
    insertAfterTheParticularData(tail, 3, 4);
    print(tail);

    cout << "\n";

    deleteNodeUsingValue(tail, 3);

    cout << "\n";
    cout << "\n";
   
    print(tail);
}