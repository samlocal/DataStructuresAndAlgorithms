#include <iostream>
using namespace std;

// int power(int a, int b)
// {
//     if (b == 1)
//         return a; // or if(b==0) return 1;

//     return a * power(a, b - 1);
// }

int power(int a, int b)
{
    if(b==0) return 1;
    
    

    if (b & 1)
    { // odd case
        return  a*power(a, b / 2) * power(a, b / 2);
    }
    else
    { // even case
        return power(a, b / 2) * power(a, b / 2);
    }
}
int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;

    cout << "power of " << a << " and " << b << " is " << power(a, b);
}