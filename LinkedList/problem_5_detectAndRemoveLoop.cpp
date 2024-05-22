// Detect Cycle
/*
bool isCycleOrLoop(Node *head)
{
    Node *temp=head;
    map<Node* , bool> visited;

    while(temp!=NULL)
    {
        if(visited[temp]==true) return true;

        visited[temp]=true;
        temp=temp->next;
    }

    return false;
}
*/

// Floyds Cycle Detection
/*
bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast) return true;
        }
        return false;
    }*/

// starting node of the loop
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node *head, Node *tail, int position)
{
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}

// } Driver Code Ends
// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
private:
    bool floydsCycleDtetction(Node *head, Node *&slow, Node *&fast)
    {
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }

public:
    // Function to find first node if the linked list has a loop.
    int findFirstNode(Node *head)
    {
        int ans = -1;

        Node *slow = head;
        Node *fast = head;

        if (floydsCycleDtetction(head, slow, fast))
        {
            Node *intersection = slow;

            slow = head;

            while (slow != intersection)
            {
                slow = slow->next;
                fast = fast->next;
                if (slow == fast)
                {
                    break;
                }
            }
        }
        else
        {
            return ans;
        }
        ans = fast->data;

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n;

        Node *head, *tail;
        cin >> num;
        head = tail = new Node(num);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin >> pos;
        loopHere(head, tail, pos);

        Solution ob;
        int ans = ob.findFirstNode(head);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends