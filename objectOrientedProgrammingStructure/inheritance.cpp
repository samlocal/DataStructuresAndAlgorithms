#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int age;
    int weight;

    int getHeight()
    {
        return this->height;
    }

    int getWeight()
    {
        return weight;
    }

    int getAge()
    {
        return this->age;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep()
    {
        cout<<"Male Sleeping .\n";
    }
};
int main()
{
  Male obj;
  cout<<"Height : "<<obj.height<<"\n";
}