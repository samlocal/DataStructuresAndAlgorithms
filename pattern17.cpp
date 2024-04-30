#include <iostream>
using namespace std;

int main()
{
    // pattern for n=4
    /*
    A
    B C
    C D E
    D E F G
    */

    int n;
    cout << "Enter n:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            char ch = 'A' + row + column - 2;
            cout << ch;
            column = column + 1;
        }
        row = row + 1;
        cout << "\n";
    }
}