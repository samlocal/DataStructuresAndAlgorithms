#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Stack Creation :
    stack<int> s;

    // pushing into Stack
    s.push(2);
    s.push(8);
    s.push(9);
    s.push(0);
    s.push(23);

    // Top of the stack
    cout << "Top is : " << s.top() << "\n";

    // poping from stack
    s.pop();

    // Top of the stack
    cout << "Top is : " << s.top() << "\n";

    // poping from stack
    s.pop();

    // Top of the stack
    cout << "Top is : " << s.top() << "\n";

    //checking stack is empty or not
    if(s.empty()) cout<<"Stack is empty\n";
    else cout<<"Stack is not empty "<<s.size() <<" elements are present\n";
}