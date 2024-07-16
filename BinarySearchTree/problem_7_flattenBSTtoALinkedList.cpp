// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the Binary Tree node structure
    
//     template <typename T>
//     class TreeNode {
//         public :
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~TreeNode() {
//             if(left)
//                 delete left;
//             if(right)
//                 delete right;
//         }
//     };

// ************************************************************/
// /*
// void inOrderTraversal(TreeNode<int>* root,vector<int> &ans)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inOrderTraversal(root->left,ans);
//     ans.push_back(root->data);
//     inOrderTraversal(root->right,ans);
    
// }
// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     // Write your code here
//     vector<int> ans;
//     inOrderTraversal(root,ans);
    
//     //creating a new root fro linked list
//     TreeNode<int>* newRoot=new TreeNode<int>(ans[0]);//it act as head

//     TreeNode<int>* curr=newRoot;//it act as tail
    
//     for(int i=1;i<ans.size();i++)
//     {
//        TreeNode<int>* newNode=new TreeNode<int>(ans[i]);
//        curr->right=newNode;
//        curr->left=NULL;
//        curr=newNode; 
//     }

//     //making the last node right and left to null
//     curr->left=NULL;
//     curr->right=NULL;
    
//     return newRoot;
    
    
    
    
// }
// */