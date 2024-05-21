// /*
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
//     private:

//     //Recursive Way
//     void reverse(ListNode *&head , ListNode *prev , ListNode *curr)
//     {
//         //base case
//         if(curr==NULL)
//         {
//             head=prev;
//             return;
//         }

//         //recursion
//         reverse(head,curr,curr->next);
//         curr->next=prev;
//     }

//     //Iterative Way
//     void solve(ListNode *&head , ListNode *prev , ListNode *curr)
//     {
//         while(curr!=NULL)
//         {
//             ListNode *forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
//             head=prev;
//         }
//     }
// public:
//     ListNode* reverseList(ListNode* head) {
//           ListNode *prev=NULL;
//           ListNode *curr=head;


//         reverse(head,prev,curr);

//         return head;
//     }
// };*/