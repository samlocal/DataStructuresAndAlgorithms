// #include <bits/stdc++.h>
// using namespace std;

// class node {
// public:
//     int data;
//     int row;
//     int column;

//     //constructor
//     node(int data, int row, int column) {
//         this->data = data;
//         this->row = row;
//         this->column = column;
//     }
// };

// class compare {
// public:
//     bool operator()(node* a, node* b) {
//         return a->data > b->data;
//     }
// };

// int kSorted(vector<vector<int>>& a, int k, int n) {
//     priority_queue<node*, vector<node*>, compare> minHeap;

//     int mini = INT_MAX;
//     int maxi = INT_MIN;

//     // Initialize the heap with the first element of each list
//     for (int i = 0; i < k; i++) {
//         node* temp = new node(a[i][0], i, 0);
//         minHeap.push(temp);
//         maxi = max(maxi, a[i][0]);
//     }

//     // Correct initialization of mini
//     mini = minHeap.top()->data;

//     int ansStart = mini;
//     int ansEnd = maxi;

//     while (!minHeap.empty()) {
//         node* temp = minHeap.top();
//         minHeap.pop();
//         mini = temp->data;

//         // Update the range if the current range is smaller
//         if (maxi - mini < ansEnd - ansStart) {
//             ansStart = mini;
//             ansEnd = maxi;
//         }

//         // If there are more elements in the row, add the next element to the heap
//         if (temp->column + 1 < a[temp->row].size()) {
//             int nextElement = a[temp->row][temp->column + 1];
//             maxi = max(maxi, nextElement);
//             minHeap.push(new node(nextElement, temp->row, temp->column + 1));
//         } else {
//             break;
//         }
//     }

//     return ansEnd - ansStart + 1;
// }