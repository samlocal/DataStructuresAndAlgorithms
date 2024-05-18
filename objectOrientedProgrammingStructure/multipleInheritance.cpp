#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark()
    {
        cout<<"Barking....\n";
    }
};

class Human{
    public:
    void speak()
    {
        cout<<"Speaking....\n";
    }
};

class Hybrid : public Animal, public Human{

};

int main()
{
    Hybrid obj;
    obj.speak();
    obj.bark();
}