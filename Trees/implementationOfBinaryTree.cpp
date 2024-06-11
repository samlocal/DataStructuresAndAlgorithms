#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter data : \n";
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left part of " << data << "\n";
    root->left = buildTree(root);

    cout << "Enter data for right " << data << "\n";
    root->right = buildTree(root);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;

    // first insert the root node
    q.push(root);
    q.push(NULL); // seperator for seperating the levels

    while (!q.empty())
    {
        node *temp = q.front();

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

void inOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void buildTreeFromLevelOrderTraversal(node* &root)
{
    queue<node*>q;
    cout<<"Enter data for root : \n";
    int data;
    cin>>data;
    root=new node(data);

    //inserting root in queue
    q.push(root);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        //left insrtion
        cout<<"enter data for left of "<<temp->data<<"\n";
        int leftData;
         cin>>leftData;
        
        if(leftData!=-1)
        {
             temp->left=new node(leftData);
             q.push(temp->left);
        }

         //right insrtion
        cout<<"enter data for right of "<<temp->data<<"\n";
        int rightData;
         cin>>rightData;
        
        if(rightData!=-1)
        {
             temp->right=new node(rightData);
             q.push(temp->right);
        }
    }
}
int main()
{
    // root
    node *root = NULL;

    buildTreeFromLevelOrderTraversal(root);

    levelOrderTraversal(root);



  /*
    // creation
    root = buildTree(root);

    // level order traversal
    cout << "Level order Traversal : \n";
    levelOrderTraversal(root);
    cout<<"\n";
    

    //inorderTraversal
    cout<<"Inorder Traversal : \n";
    inOrderTraversal(root);
    cout<<"\n";

    //preOrderTraversal
    cout<<"PreOrder Traversal : \n";
    preOrderTraversal(root);
    cout<<"\n";

    //postOrderTraversal
    cout<<"PreOrder Traversal : \n";
    postOrderTraversal(root);
    cout<<"\n";*/
}

// data 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1