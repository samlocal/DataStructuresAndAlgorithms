#include<iostream>
using  namespace std;

class A{
    public:
    void sayHello()
    {
        cout<<"Hello Anna...\n";
    }

    void sayHello(string name)
    {
        cout<<"Hello "<<name<<"\n";
    }
};

int main()
{
    A a;
    a.sayHello();
    a.sayHello("sameer");
}