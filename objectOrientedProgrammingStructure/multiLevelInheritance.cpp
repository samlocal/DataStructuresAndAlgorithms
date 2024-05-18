#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak()
    {
        cout<<"Speaking....\n";
    }
};

class Dog : public Animal{
    public:
    string name;
};

class greatDane : public Dog{
    public:
    int height;
};

int main()
{
    greatDane tiger;
    tiger.speak();
}