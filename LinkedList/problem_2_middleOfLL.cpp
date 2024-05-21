// /*/**
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
// public:
//     ListNode* middleNode(ListNode* head) {

//         ListNode *slow=head;
//         ListNode *fast=head;

//         while(fast->next!=NULL)
//         {
//             slow=slow->next;
            
//             if(fast->next->next==NULL)
//             {
               
//                 break;
//             }
//             else fast=fast->next->next;

//         }
//         return slow;
        
//     }
// };


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  *//*
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slowPointer = head;
//         ListNode* fastPointer = head;

//         while (fastPointer != NULL && fastPointer->next != NULL) {
//             slowPointer = slowPointer->next;
//             fastPointer = fastPointer->next->next;
//         }

//         return slowPointer;
//     }
// };*/

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
// // private:
// //     int getLength(ListNode* head) {
// //         if (head == NULL)
// //             return 0;

// //         return 1 + getLength(head->next);
// //     }

// // public:
// //     ListNode* middleNode(ListNode* head) {
// //         int length = getLength(head);

// //         int mid=(length/2);

// //         while(mid!=0)
// //         {
// //             head=head->next;
// //             --mid;
// //         }
// //         return head;
// //         }
// // };**/