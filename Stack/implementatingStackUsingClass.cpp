#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    // properties
    int *arr;
    int top;
    int size;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // behaviour or functionalities
    // push operation
    void push(int ele)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = ele;
        }
        else
        {
            cout << "Stack overflow\n";
        }
    }

    // pop operation
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflow\n";
        }
    }

    // peek element
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty\n";
            return -1;
        }
    }

    //stack empty or not
    bool isEmpty()
    {
        if(top==-1) return true;
        return false;
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
   

    cout<<"Top is "<<st.peek()<<"\n";

    st.pop();
    cout<<"Top is "<<st.peek()<<"\n";

    cout<<st.isEmpty()<<"\n";
     st.pop();
      st.pop();
      cout<<"Top is "<<st.peek()<<"\n";

    cout<<st.isEmpty();
}