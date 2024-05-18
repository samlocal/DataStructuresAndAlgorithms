#include<iostream>
using namespace std;

class A{
    public:
    void fun()
    {
        cout<<"from A\n";
    }
};

class B{
    public:
    void fun()
    {
        cout<<"from B\n";
    }
};

class C :public A , public B{
    public:
};

int main()
{
 C c;
 c.A::fun();
 c.B::fun();
}