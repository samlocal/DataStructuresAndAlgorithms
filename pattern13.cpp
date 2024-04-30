#include <iostream>
using namespace std;

int main()
{
    // pattern 6 for n=3
    /*
    A B C
    D E F
    G H I
    */

    int n;
    cout << "Enter n:";
    cin >> n;

    int row = 1;
    int value = 0;
    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            char ch = 'A' + value;
            cout<<ch;
            value = value + 1;
            column=column+1;
        }
        row = row + 1;
        cout << "\n";
    }
}