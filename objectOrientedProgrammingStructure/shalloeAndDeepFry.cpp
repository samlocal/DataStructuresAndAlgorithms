#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    string *name;

    Hero()
    {
        cout<<"Default Constructor is Called.\n";
        name = new string;
    }

    void setName(string name)
    {
        *(this->name) = name;
    }

    void print()
    {
        cout<<" [ Health : "<<this->health<<" ";
        cout<<"Level : "<<this->level<<" ";
        cout<<"Name : "<<*(this->name)<<" ] \n";
    }

    //custom copy constructor
    Hero(Hero &obj)
    {
        name = new string;
        *name=*(obj.name);
        this->health=obj.health;
        this->level=obj.level;
    }

};

int main()
{
    Hero h1;
    h1.health=9;
    h1.level='N';
    h1.setName("sameer");
    h1.print();

    //Use Default copt constructor
    Hero h2(h1);   //or Hero h2=h1;
    h2.print();

    //changing h1 name
    *(h1.name)="Basha";
    cout<<"After changing h1 name :\n";
    h1.print();
    h2.print();

}