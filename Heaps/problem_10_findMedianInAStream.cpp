// #include <bits/stdc++.h>
// int signum(int a, int b) {
//   if (a == b)
//     return 0;
//   if (a > b)
//     return 1;
//   return -1;
// }
// void callMedian(int element, priority_queue<int> &maxHeap,
//                 priority_queue<int, vector<int>, greater<int>> &minHeap,
//                 int &median) {
//   switch (signum(maxHeap.size(), minHeap.size())) {
//   case 0:
//     if (element > median) {
//       minHeap.push(element);
//       median = minHeap.top();
//       return;
//     } else {
//       maxHeap.push(element);
//       median = maxHeap.top();
//       return;
//     }
//   case 1:
//     if (element > median) {
//       minHeap.push(element);
//       median = (maxHeap.top() + minHeap.top()) / 2;
//       return;
//     } else {
//       minHeap.push(maxHeap.top());
//       maxHeap.pop();
//       maxHeap.push(element);
//       median = (maxHeap.top() + minHeap.top()) / 2;
//       return;
//     }
//   case -1:
//     if (element > median) {
//       maxHeap.push(minHeap.top());
//       minHeap.pop();
//       minHeap.push(element);
//       median = (maxHeap.top() + minHeap.top()) / 2;
//       return;

//     } else {
//       maxHeap.push(element);
//       median = (maxHeap.top() + minHeap.top()) / 2;
//       return;
//     }
//   }
// }
// vector<int> findMedian(vector<int> &arr, int n) {

//   int median = 0;
//   priority_queue<int> maxHeap;
//   priority_queue<int, vector<int>, greater<int>> minHeap;
//   vector<int> ans;

//   for (int i = 0; i < arr.size(); i++) {
//     callMedian(arr[i], maxHeap, minHeap, median);
//     ans.push_back(median);
//   }
//   return ans;
// }
