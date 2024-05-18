#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << "speaking....\n";
    }
};

class Dog : public Animal{
   

};
int main()
{
    Dog tom;
    tom.speak();
}