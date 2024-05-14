#include <iostream>
using namespace std;
int count = 0;
void print()
{

    cout << count << " ";

    print();
}
int main()
{
    print();
}