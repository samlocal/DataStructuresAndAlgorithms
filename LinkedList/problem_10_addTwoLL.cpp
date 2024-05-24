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
//     private:
//     ListNode* reverse(ListNode *&head)
//     {
//         ListNode *prev=NULL;
//         ListNode *curr=head;
//         ListNode *forward=NULL;

//         while(curr!=NULL)
//         {
//             forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
//         }
//         return prev;

//     }

//     void insertAtTail(ListNode* &ansHead, ListNode* &ansTail, int digit)
//     {
//         ListNode* digitNode = new ListNode(digit);
//         if(ansTail==NULL)
//         {
//             ansHead=digitNode;
//             ansTail=digitNode;
//             return;
//         }
//         else
//         {
//             ansTail->next=digitNode;
//             ansTail=digitNode;
//         }
//     }

//     ListNode* add(ListNode* first , ListNode* second)
//     {
//         int carry=0;
//         ListNode *ansHead=NULL;
//         ListNode* ansTail=NULL;

//         while(first!=NULL || second!=NULL || carry!=0)
//         {
//             int val1=0;
//             if(first!=NULL) val1=first->val;

//             int val2=0;
//             if(second!=NULL) val2=second->val;
            
//             int sum=val1+val2+carry;
//             int digit=sum%10;
//             insertAtTail(ansHead,ansTail,digit);
//             carry=sum/10;
//             if(first!=NULL) first=first->next;
//              if(second!=NULL) second=second->next;
//         }


//         return ansHead;
        
//     }
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         //step 1 - Reversing the LL
//         l1=reverse(l1);
//         l2=reverse(l2);

//         //step 2 - Add two LL
//         ListNode* ans=add(l1,l2);

//         //step 3 - Reverse the resultant LL
//         ans=reverse(ans);


//         return (ans);


//     }
// };*/