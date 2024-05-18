#include <iostream>
using namespace std;

class Hero
{

    // properties
public:
    int health;

    char level;
    

    //Default Consrtructor
    Hero()
    {
        health=555;
        level='Q';
        cout<<"Default constructor called.\n";
    }

    //Parameterized Constructor
    Hero(int h , char l)
    {
        health=h;
        level=l;
        cout<<"Parameterized Constructor . \n";
    }

   //this keyword
    Hero(int health)
    {
        this->health=health;
        cout<<"Address of this -> : "<<this<<"\n";
    }

    //writing own copy constructor
    Hero(Hero &obj)
    {
        this->health=obj.health+1; //changing value for identificartion
        this->level=obj.level;
    }

public:
    // getters and setters

    // Getters
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    // Setters
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};
int main()
{
 
   //Static Allocation
   /*
    Hero sam;

    // Setters
    sam.setHealth(99);
    sam.setLevel('X');

    // Getters
    cout << "Health : " << sam.getHealth()<<"\n";
    cout << "Level  : " << sam.getLevel()<<"\n";*/


    //Dynamic Allocation
    /*
    Hero *h1 = new Hero;

    //Accessing
    (*h1).health=10;
    cout<<"Health : "<<(*h1).health<<"\n";

    (*h1).setHealth(200);
    cout<<"Health : "<<(*h1).getHealth()<<"\n";

    h1->level='S';
    cout<<"Level is : "<<h1->level<<"\n";

    h1->setLevel('P');
    cout<<"Level is : "<<h1->getLevel()<<"\n";
    */

   //Constructors
   
   /*
   //Default constructor
   //Object created - statically
   Hero h1;
   cout<<"Default constructor health : "<<h1.health<<"\n";
   cout<<"Default constructor Level : "<<h1.level<<"\n";

   cout<<"\n";

   //object created - Dynamically
   Hero *h2 = new Hero;
   cout<<"Default constructor health : "<<h1.health<<"\n";
   cout<<"Default constructor Level : "<<h1.level<<"\n";
   */

  
  /*
  //Parameterized Constructor
  Hero h1(23,'z');  
  cout<<"Health is : "<<h1.health<<"\n";
  cout<<"Level is  : "<<h1.level<<"\n";
  */


 //this pointer
 /*
 Hero *h1 = new Hero( 222);
cout<<"Addrress of Hero : "<<h1<<"\n";
cout<<"Health using this pointer : "<<h1->health<<"\n";
//this pointer address and current object address have to be same*/


//Copy Constructor
/*
Hero one(2328 , 'J');

//I want to create a another object with same values as one object
Hero two(one);
//Behind the scenes
// two.health = one.health
//two.level = one.level

cout<<"two health : "<<two.health<<"\n";
cout<<"one health : "<<one.health<<"\n";
cout<<"two level : "<<two.level<<"\n";
cout<<"one level : "<<one.level<<"\n";
*/



//Calling own copy constructor
/*
Hero h1(111,'A');
cout<<"h1  health : "<<h1.health<<"\n";
cout<<"h1 level : "<<h1.level<<"\n";

//copying
Hero h2(h1);
cout<<"h2  health : "<<h2.health<<"\n";
cout<<"h2 level : "<<h2.level<<"\n";
*/
















   





}