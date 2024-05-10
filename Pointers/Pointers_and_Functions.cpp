#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<"Address -> "<<p<<"\n";
    cout<<"Value -> "<<*p<<"\n";
}


void update(int *p)
{
    *p=*p+1;
}

int getSum(int *ptr)
{
    int ans=0;

    for(int i=0;i<5;i++)
    {
        ans=ans+ *(ptr+i);
    }
    return ans;
}
int main()
{
    int x=5;
    int *ptr=&x;

    print(ptr);
    update(ptr);
    print(ptr);

    int arr[5]={1,2,3,4,5};
    int *ptr_arr=arr;
    int sum=getSum(ptr_arr);
    cout<<"sum of array -> "<<sum<<"\n";

}