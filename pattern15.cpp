#include <iostream>
using namespace std;
int main()
{
    // pattern for n=4
    /*
    A
    B B
    C C C
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
            char ch = 'A' + row - 1;
            cout << ch;
            column = column + 1;
        }
        row = row + 1;
        cout << "\n";
    }
}