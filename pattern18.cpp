#include <iostream>
using namespace std;

int main()
{
    // pattern for n=4
    /*
    D
    C D
    B C D
    A B C D
    */

    int n;
    cout << "Enter n:";
    cin >> n;


    //Approach 1

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            char ch = 'A' + n - row + column - 1;
            cout << ch;
            column = column + 1;
        }
        row = row + 1;
        cout << "\n";
    }



    //Approach 2
    /*

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        char ch = 'A' + n - row;
        while (column <= row)
        {
            cout << ch;
            ch = ch + 1;
            column = column + 1;
        }
        row = row + 1;
        cout << "\n";
    }
    */
}