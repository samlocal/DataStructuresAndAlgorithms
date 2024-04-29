#include<iostream>
using namespace std;

int main()
{
    //Mathamatical operators

    // Addition
    cout << "Addition: " << 2 + 3 << "\n";

    // Subtraction
    cout << "Subtraction: " << 5 - 3 << "\n";

    // Multiplication
    cout << "Multiplication: " << 2 * 3 << "\n";

    // Division
    cout << "Division: " << 6 / 3 << "\n";

    // Modulus
    cout << "Modulus: " << 5 % 2 << "\n";


    //Relational operators

    int a = 5, b = 3;

    // Equal to (==)
    cout << "Equal to: " << (a == b) << std::endl;

    // Not equal to (!=)
    cout << "Not equal to: " << (a != b) << std::endl;

    // Greater than (>)
    cout << "Greater than: " << (a > b) << std::endl;

    // Less than (<)
    cout << "Less than: " << (a < b) << std::endl;

    // Greater than or equal to (>=)
    cout << "Greater than or equal to: " << (a >= b) << std::endl;

    // Less than or equal to (<=)
    cout << "Less than or equal to: " << (a <= b) << std::endl;



    //Logical operators

    bool a1 = true, b1 = false;

    // Logical AND (&&)
    cout << "Logical AND: " << (a1 && b1)<< std::endl;

    // Logical OR (||)
    cout << "Logical OR: " << (a1 || b1) << std::endl;

    // Logical NOT (!)
    cout << "Logical NOT of a: " << !a1 << std::endl;
    cout << "Logical NOT of b: " << !b1 << std::endl;



    cout<<"int/int "<<2/3<<"\n";

    cout<<"float/int "<<2.0/3<<"\n";

    cout<<"int/float "<<2/3.0<<"\n";

    cout<<"double/int "<<2.0/3<<"\n";

    cout<<"int/double "<<2/3.0<<"\n";

    cout<<"float/float "<<2.0/3.0<<"\n";

    cout<<"double/double "<<2.0/3.0<<"\n";


    //type casting double to int
    int x=2.0/3.0;
    cout<<"double to int "<<x;
}