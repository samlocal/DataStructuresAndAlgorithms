/*
this solution is partially correct */




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
//     void solve(ListNode* &list1, ListNode* &list2)
//     {
//         ListNode* curr1=list1;
//         ListNode* next1=curr1->next;
//         ListNode* curr2=list2;
//         ListNode* next2=curr2->next;

//         while(next1!=NULL && curr2!=NULL)
//         {
//             if(curr2->val >=curr1->val && curr2->val <=next1->val)
//             {
//                 curr1->next=curr2;
//                 next2=curr2->next;
//                 curr2->next=next1;

//                 curr1=curr2;
//                 curr2=next2;

//             }
//             else
//             {
//                 //curr1 and next1 ko aage badao
//                 curr1=curr1->next;
//                 next1=next1->next;
//                 if(next1==NULL)
//                 {
//                     curr1->next=curr2;
//                     return ;
//                 }
//             }
//         }
//     }
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1==NULL) return list2;
//         if(list2==NULL) return list1;

//         //Having only one element is present in fiste list
//         if(list1->next==NULL && list2->next==NULL)
//         {
//             if(list1->val<=list2->val)
//             {
//                 list1->next=list2;
//                  return list1;
//             }
//             else
//             {
//                 list2->next=list1;
//                 return list2;
//             }
//         }

//         //finding the smallest starting node element from the two lists
//         if(list1->val <= list2->val)
//         {
//             solve (list1,list2); //basically 1st one is smaller
            
//         }
//         else
//         {
//             solve(list2,list1); //basically 2nd one is smaller
//         }
//         return list1;
        
//     }
// };