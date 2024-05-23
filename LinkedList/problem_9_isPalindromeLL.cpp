// // //Approach 1
// // /*
// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // class Solution {
// //     private:
// //     bool isPalindrome(vector<int> arr)
// //     {
// //         int s=0;
// //         int e=arr.size()-1;

// //         while(s<=e)
// //         {
// //             if(arr[s]!=arr[e]) return false;
// //             s++;
// //             e--;
// //         }
// //         return true;
// //     }
// // public:
// //     bool isPalindrome(ListNode* head) {
// //         vector<int> arr;

// //         ListNode* temp=head;
// //         while(temp!=NULL)
// //         {
// //             arr.push_back(temp->val);
// //             temp=temp->next;
// //         }

// //         return isPalindrome(arr);
// //     }
// // };*/


// //********************************************


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */


// class Solution {
// private:
//     ListNode* getMiddleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }

//     ListNode* reverse(ListNode* head) {
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         ListNode* next = nullptr;

//         while (curr != nullptr) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }

// public:
//     bool isPalindrome(ListNode* head) {
//         if (head == nullptr || head->next == nullptr) return true;

//         // Step 1: Find the middle of the linked list
//         ListNode* middle = getMiddleNode(head);

//         // Step 2: Reverse the second half of the linked list
//         ListNode* secondHalfStart = reverse(middle);

//         // Step 3: Compare the first and the second half nodes
//         ListNode* firstHalfStart = head;
//         ListNode* secondHalfCopy = secondHalfStart; // To restore the list later

//         while (secondHalfStart != nullptr) {
//             if (firstHalfStart->val != secondHalfStart->val) {
                
//                 return false;
//             }
//             firstHalfStart = firstHalfStart->next;
//             secondHalfStart = secondHalfStart->next;
//         }

       

//         return true;
//     }
// };