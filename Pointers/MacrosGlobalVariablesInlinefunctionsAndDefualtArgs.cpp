#include <iostream>
using namespace std;

#define PI 3.14 // macro

int g_v = 28; // global variable - mutable , so dont use 


void print()
{
    cout << g_v << " \n";
}
inline int getmax(int a, int b)
{
    return (a>b)?a:b;
}
int main()

{
    int radius = 2;
    cout << "Area is " << PI * radius * radius << "\n"; // PI is replaced with 3.14 before compilation

    print();

    cout << g_v << "\n";
}
