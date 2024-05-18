#include<iostream>
using namespace std;

class A{
    public:
    void f1()
    {
        cout<<"A\n";
    }
};

class B : public A{
    public:
    void f2()
    {
        cout<<"B\n";
    }
};

class C : public A{
    public:
    void f3()
    {
        cout<<"C\n";
    }
};


int main()
{
  B b;
  b.f1();
  b.f2();

  C c;
  c.f1();
  c.f3();
}