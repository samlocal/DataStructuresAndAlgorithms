#include <iostream>
using namespace std;
int main()
{

    // pattern for n=4
    /*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */

    int n;
    cout << "Enter n:";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        i = i + 1;
        cout << "\n";
    }
}