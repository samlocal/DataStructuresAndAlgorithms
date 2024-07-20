// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// */#include <bits/stdc++.h>
// using namespace std;


// class compare {
// public:
//     bool operator()(Node* a, Node* b) {
//         return a->data > b->data;
//     }
// };

// Node* mergeKLists(vector<Node*>& listArray) {
//     priority_queue<Node*, vector<Node*>, compare> min_heap;
//     Node* head = NULL;
//     Node* tail = NULL;

//     int k = listArray.size();

//     // if(k==0) return NULL;

//     // inserting all the first elements
//     for (int i = 0; i < k; i++) {
//         if (listArray[i] != NULL) min_heap.push(listArray[i]);
//     }

//     // processing remaining elements
//     while (!min_heap.empty()) {
//         Node* temp = min_heap.top();
//         min_heap.pop();

//         if (head == NULL) {
//             head = temp;
//             tail = temp;
//         } else {
//             tail->next = temp;
//             tail = tail->next;
//         }

//         if (tail->next) {
//             min_heap.push(tail->next);
//         }
//     }
//     return head;
// }
