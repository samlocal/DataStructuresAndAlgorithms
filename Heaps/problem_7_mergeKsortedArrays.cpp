// #include <bits/stdc++.h>
// class node {
// public:
//   int data;
//   int row;
//   int column;
//   //constructor
//   node(int d,int i,int j)
//   {
//       this->data=d;
//       this->row=i;
//       this->column=j;
//   }
// };
// class compare {
// public:
//   bool operator()(node *a, node *b) { return a->data > b->data; }
// };
// vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k) {
//   priority_queue < node *, vector<node *>, compare> min_heap;
//   vector<int>ans;

//   //step 1:first element of every array
//   for(int row=0;row<k;row++)
//   {
//       node* temp=new node(kArrays[row][0],row,0);
//       min_heap.push(temp);
//   }

//   //step 2:
//   while(min_heap.size()>0)
//   {
//       //push top element into ans
//       node* temp=min_heap.top();
//       ans.push_back(temp->data);
//       min_heap.pop();

//       //pushing the next element of same array
//       int row=temp->row;
//       int column=temp->column;

//       if(row<k && column+1<kArrays[row].size())
//       {
//           node* next=new node(kArrays[row][column+1],row,column+1);
//           min_heap.push(next);
//       }

//   }
  
//   return ans;

// }
