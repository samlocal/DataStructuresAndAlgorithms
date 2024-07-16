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
int main()
{
    Node* root=NULL;  //root node

    //taking input in the form of streams
    cout<<"Enter data to create BST : \n";
    takeInput(root);

    //printing LOT
    cout<<"Printing BST:\n";
    levelOrderTraversal(root);
    
}