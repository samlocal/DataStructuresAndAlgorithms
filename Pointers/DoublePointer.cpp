#include<iostream>
using namespace std;

void update(int **p)
{
    **p=**p+1;
}
int main()
{
    int i=5;
    int *ptr1=&i;
    int **ptr2=&ptr1;

    cout<<"Single Pointer -> "<<ptr1<<"\n";
    cout<<"Double Pointer -> "<<ptr2<<"\n";

    cout<<" Value at Single Pointer -> "<<*ptr1<<"\n";
    cout<<" Value at Double Pointer -> "<<*ptr2<<"\n";

    cout<<" Value at single Pointer using double pointer -> "<<**ptr2<<"\n";

    cout<<"Before update : "<<i<<"\n";
    update(ptr2);
    cout<<"After update : "<<i<<"\n";



}