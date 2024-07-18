#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0]=-1; //just for fun
        size=0;
    }

    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else return;
        }
    }

    void deletion()
    {
        if(size==0){
            cout<<"Nothing to delete from heap . \n";
            return;
        }
        
        //Replacing with last node
        arr[1]=arr[size];
        //removing last node
        size--;
        //propagating to its correct position
        int index=1;
        while(index<size)
        {
            int leftChild=2*index;
            int rightChild=(2*index)+1;
            if(leftChild<size && arr[index]<arr[leftChild]) //caomparing with left child
            {
                swap(arr[index],arr[leftChild]);
                index=leftChild;
            }
            else if(rightChild<size && arr[index]<arr[rightChild]) //comparing with right child
            {
                swap(arr[index],arr[rightChild]);
                index=rightChild;
            }
            else return; //no problem case

        }


    }

    void print()
    {
        for(int i=1;i<=size;i++) cout<<arr[i]<<" ";

        cout<<"\n";
    }
};

void heapify(int arr[] , int n  ,int i)
{
    int largest=i;
    int left=2*i;
    int right=(2*i)+1;

    if(left < n && arr[largest]<arr[left])
    {
        largest=left;
    }
     if(right < n  && arr[largest]<arr[right])
    {
        largest=right;
    }

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr ,n,largest);
    }
     
}
int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    

    h.print();

    h.deletion();

    h.print();

    //heapify
    int n=5;
    int arr[6]={-1,54,53,55,52,50};
    
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }

    cout<<"Printing the array : \n";
    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    cout<<"\n";
}