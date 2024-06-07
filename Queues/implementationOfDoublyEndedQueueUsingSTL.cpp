#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;

    // push front
    d.push_front(9);
    d.push_front(99);
    d.push_front(91);
    d.push_front(9991);

    // push back
    d.push_back(-11);
    d.push_back(-9);
    d.push_back(-2);
    d.push_back(-8);

    // front
    cout << "Front : " << d.front() << "\n";

    // back
    cout << "Back : " << d.back() << "\n";

    // pop front
    d.pop_front();

    // pop back
    d.pop_back();

    // front
    cout << "Front : " << d.front() << "\n";

    // back
    cout << "Back : " << d.back() << "\n";
}