#include <bits/stdc++.h> 
/*
    Following is the class structure of BinaryTreeNode class for referance:

    class BinaryTreeNode {
       public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };
*/
/*
BinaryTreeNode<int>* solve(vector<int> &preorder,int min,int max,int &index)
{
    if((preorder[index]<min || preorder[index]>max)|| index>=preorder.size()) return NULL;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(preorder[index++]); //incrementing the index
    root->left=solve(preorder,min,root->data,index);
    root->right=solve(preorder,root->data,max,index);
    return root;
}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    int min=INT_MIN;
    int max=INT_MAX;
    int index=0;
    return solve(preorder,min,max,index);
}
*/