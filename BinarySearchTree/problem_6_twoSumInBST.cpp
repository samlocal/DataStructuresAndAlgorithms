#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
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
    
};
***************/
/*
void inOrderTraversal(BinaryTreeNode<int>* root,vector<int> &list)
{
    if(root==NULL) return;

    inOrderTraversal(root->left, list);
    list.push_back(root->data);
    inOrderTraversal(root->right, list);
}
bool twoSum(vector<int> list , int target)
{
    int i=0;
    int j=list.size()-1;

    while(i<j)
    {
        if(list[i]+list[j]==target) return true;
        else if(list[i]+list[j]>target) j--;
        else i++;
    }
    return false;
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int>list;
    inOrderTraversal(root,list);
    return twoSum(list, target);
}
*/