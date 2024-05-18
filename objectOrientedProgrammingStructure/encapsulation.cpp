#include<iostream>
using namespace std;
 class Student{
    private:
    string name;
    int age;
    int marks;
    public:
    int getMarks()
    {
        return this->marks;
    }

 };
int main()
{

    Student s1;
    cout<<"Marks : "<<s1.getMarks();

}