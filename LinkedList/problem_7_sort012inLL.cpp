//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    private:
    void insertAtTail(Node* &head, Node *&tail , int d)
    {
        Node* newNode=new Node(d);
        if(tail==NULL)
        {
            
            tail=newNode;
            head=newNode;
        }
        
        tail->next=newNode;
        tail=newNode;
    }
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(head->next==NULL) return head;
        int zero=0;
        int one=0;
        int two=0;
        
        Node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0) zero++;
            else if(temp->data == 1) one++;
            else two++;
            temp=temp->next;
        }
        
        temp=head;
        while(temp!=NULL)
        {
            if(zero!=0)
            {
                temp->data=0;
                temp=temp->next;
                zero--;
            }
            else if(one!=0)
            {
                temp->data=1;
                temp=temp->next;
                one--;
            }
            else
            {
                temp->data=2;
                temp=temp->next;
                two--;
            }
        }
        return head;
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends




//***********************************************************

// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;
// /* Link list Node */
// struct Node {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// struct Node *start = NULL;


// // } Driver Code Ends
// /*
 
//   Node is defined as
//   struct Node {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// */
// class Solution
// {
//     public:
//     //Function to sort a linked list of 0s, 1s and 2s.
//     Node* segregate(Node *head) {
        
//         Node* zeroHead=new Node(99);
//         Node* zeroTail=zeroHead;
        
//         Node* oneHead=new Node(99);
//         Node* oneTail=oneHead;
        
//         Node* twoHead=new Node(99);
//         Node* twoTail=twoHead;
        
//         Node* temp=head;
        
//         while(temp!=NULL)
//         {
//             Node* newNode = new Node(temp->data);
            
//             if(temp->data==0)
//             {
//                 zeroTail->next=newNode;
//                 zeroTail=newNode;
//             }
//             else if(temp->data==1)
//             {
//                 oneTail->next=newNode;
//                 oneTail=newNode;
//             }
//             else{
//                 twoTail->next=newNode;
//                 twoTail=newNode;
//             }
//             temp=temp->next;
//         }
        
//        if(oneHead->next!=NULL)
//        {
//            zeroTail->next=oneHead->next;
//        }
//        else{
//            zeroTail->next=twoHead->next;
//        }
       
//        oneTail->next=twoHead->next;
//        twoTail->next=NULL;
        
//         return zeroHead->next;
        
        
        
        
//     }
// };


// //{ Driver Code Starts.

// // Function to sort a linked list of 0s, 1s and 2s
// void printList(struct Node *Node) {
//     while (Node != NULL) {
//         printf("%d ", Node->data);
//         Node = Node->next;
//     }
//     printf("\n");
// }

// /* Drier program to test above function*/
// void insert(int n1) {
//     int n, value, i;
//     // scanf("%d",&n);
//     n = n1;
//     struct Node *temp;
//     for (i = 0; i < n; i++) {
//         scanf("%d", &value);

//         if (i == 0) {
//             start = new Node(value);
//             temp = start;
//             continue;
//         } else {
//             temp->next = new Node(value);
//             temp = temp->next;
//             temp->next = NULL;
//         }
//     }
// }

// int main() {

//     int n;

//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         scanf("%d", &n);

//         insert(n);
//         Solution ob;
//         struct Node *newHead = ob.segregate(start);
//         printList(newHead);
//     }

//     return 0;
// }
// // } Driver Code Ends