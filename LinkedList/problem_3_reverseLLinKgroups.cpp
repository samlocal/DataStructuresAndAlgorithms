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
//     int getLength(ListNode *head)
//     {
//         if(head==NULL) return 0;
//         return 1+getLength(head->next);
//     }
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
        
//         if(head==NULL) return NULL;

//         //Reversing the first k groups
//         ListNode *prev=NULL;
//         ListNode *curr=head;
//         ListNode *forward=NULL;
//         int count=0;

//         while(curr !=NULL && count<k)
//         {
//             forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
//             count++;
//         }
        
//         int remainingLength=getLength(forward);  //checking remainig length  of the ll
//         if(forward != NULL && remainingLength>=k)
//         {
//             head->next= reverseKGroup(forward,k);
//         }
//         else{  //if length is less then no need to reverse the remaining list
//             head->next=forward;
//         }

//         return prev;

//     }
// };*/