#include<iostream>
using namespace std;

class Animal{
    public:
    void speak()
    {
        cout<<"Speaking...\n";
    }
};

class Dog : public Animal{
    public:
    void speak()
    {
        cout<<"Barking...\n";
    }
};

int main()
{
    Dog tom;
    tom.speak();
}