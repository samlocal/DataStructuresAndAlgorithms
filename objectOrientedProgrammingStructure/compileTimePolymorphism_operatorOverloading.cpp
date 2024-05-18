// making + into -

#include<iostream>
using namespace std;

class A{
    public:
    int x;

    int operator+ (A &obj)
    {
        int a=this->x;
        int b=obj.x;

        return a-b;
    }

    void operator() ()
    {
        cout<<"Brackets is overloaded..\n";
    }

   
};

int main()
{
    A a1;
    A a2;

    a1.x=10;
    a2.x=2;

    cout<<a1+a2;

    a1();

  
   

  
}