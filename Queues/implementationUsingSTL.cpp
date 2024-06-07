#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // creation of queue
    queue<int> q;

    // Pushing
    q.push(9);
    q.push(23);
    q.push(7);
    q.push(88);

    // size
    cout << "Size of queue : " << q.size() << "\n";

    // poping
    q.pop();

    // size
    cout << "Size of queue : " << q.size() << "\n";

    // empty
    cout << "Empty or not : " << q.empty() << "\n";

    // Front
    cout << "Front of queue : " << q.front() << "\n";

    q.pop();

    cout << "Front of queue : " << q.front() << "\n";
}