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
bool isBST(BinaryTreeNode<int> *root,int min,int max)
{
    //base case
    if(root==NULL) return true;

    if(root->data>=min && root->data<=max) //parent node
    {
        bool left=isBST(root->left, min, root->data); //left child
        bool right=isBST(root->right, root->data, max); //right cjild

        return left && right;
    }
    else return false;

}
bool validateBST(BinaryTreeNode<int> *root) {
    return isBST(root,INT_MIN,INT_MAX);
}
*/