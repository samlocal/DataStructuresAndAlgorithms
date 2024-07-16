#include <iostream>
#include<queue>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    //constructor
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};


void levelOrderTraversal(Node *root)
{
    queue<Node*> q;

    // first insert the root node
    q.push(root);
    q.push(NULL); // seperator for seperating the levels

    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL) // level completes
        {
            cout << "\n";
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}

Node* insertIntoBST(Node* root,int data)
{
    //base case
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }

    if(data>root->data)
    {
        root->right=insertIntoBST(root->right,data);
    }
    else{
        root->left=insertIntoBST(root->left,data);
    }

    return root;

}
void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data!=-1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
    }

}
int minValue(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL) temp=temp->left;

    return temp->data;
}

int maxValue(Node* root)
{
    Node* temp=root;
    while(temp->right!=NULL) temp=temp->right;

    return temp->data;
}

Node* deleteFromBST(Node* &root,int val)
{
    if(root==NULL) return NULL;

    if(root->data==val)
    {
        //0 child
        if(root->left==NULL && root->right==NULL) {
            delete root;
            return NULL;
        }
        //1 child
        //having left child
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
         //having right child
        if(root->right!=NULL && root->left==NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL)
        {
            int minVal=minValue(root->left); //finding min value
            root->data=minVal; //replacing with value
            root->left=deleteFromBST(root->left,minVal); //deleting that node
            return root;
        }
    }
    else if(root->data>val) //left part
    {
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{ //right part
        root->right=deleteFromBST(root->right,val);
        return root;
    }

}
int main()
{
    Node* root=NULL;  //root node

    //taking input in the form of streams
    cout<<"Enter data to create BST : \n";
    takeInput(root);

    //printing LOT
    cout<<"Printing BST:\n";
    levelOrderTraversal(root);

    //Minimum Value
    cout<<"Minumum Value : "<<minValue(root)<<"\n";

    //Maximim Value
    cout<<"Maximum Value : "<<maxValue(root)<<"\n";

    
    
}