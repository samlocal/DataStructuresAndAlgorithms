#include <iostream>
using namespace std;

class kQueue
{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

    // constructor
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        next = new int[n];
        freeSpot = 0;

        // initializinng front and rear with -1
        for (int i = 0; i < k; i++)
        {
            front[i] = rear[i] = -1;
        }

        //initializing next array with next freespot
        for(int i=0;i<n;i++)
        {
            next[i]=i+1;
        }

        next[n-1]=-1;
    }

    void enque(int data,int qn)
    {
        //check for overflow
        if(freeSpot==-1)
        {
            cout<<"Queue is full\n";
            return;
        }

        //find index
        int index=freeSpot;

        //update freespot
        freeSpot=next[index];

        //check whether first element or not
        if(front[qn-1]==-1)
        {
            front[qn-1]=index;
        }
        else{
            next[rear[qn-1]]=index;
        }

        //update next
        
    }
};