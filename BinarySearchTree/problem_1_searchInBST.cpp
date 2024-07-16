/*
    Following is the Binary Tree node structure:

    template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };

*/



//Recursive Way:
/*
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root==NULL) return false;
    if(root->data==x) return true;

    if(root->data>x)
    {
        return searchInBST(root->left,x);
    }
     return searchInBST(root->right,x);

}
*/

//Iterative Way:
/*
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int> *temp=root;

    while(temp!=NULL)
    {
        if(temp->data==x) return true;

        if(temp->data>x)
        {
            temp=temp->left;
        }

        else temp=temp->right;
    }
    return false;
}*/
