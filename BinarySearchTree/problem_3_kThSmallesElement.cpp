#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
/*
void inOrder(BinaryTreeNode<int>* root,int &i, int k,int &ans)
{
    if(root==NULL) return ;

    inOrder(root->left, i,  k,ans);
    i++;
    if (i == k) {
      ans =root->data;
      return;
    }
    inOrder(root->right, i,  k,ans);

}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i=0;
    int ans=-1;
    inOrder(root,i,k,ans);
    return ans;
}
*/