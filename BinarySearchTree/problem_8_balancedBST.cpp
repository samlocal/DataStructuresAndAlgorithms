/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
/*
void inOrderTraversal(TreeNode<int>* root, vector<int> &arr)
{
    if(root==NULL) return;
    inOrderTraversal(root->left, arr);
    arr.push_back(root->data);
    inOrderTraversal(root->right, arr);
}
TreeNode<int>* inOrderToBST(int start,int end,vector<int> arr)
{
    if(start>end) return NULL;
    
    int mid=(start+end)/2;
    TreeNode<int>* root=new TreeNode<int>(arr[mid]);
    root->left=inOrderToBST(start, mid-1, arr);
    root->right=inOrderToBST(mid+1, end, arr);

    return root;

}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> list;
    inOrderTraversal(root, list);

    return inOrderToBST(0, list.size()-1, list);


}
*/