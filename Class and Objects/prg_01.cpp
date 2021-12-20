#include <iostream>
using namespace std;

// class syntax

class sample
{
    // In class bydefault statements are private
    // There are the Three methods in Classes #private || #pprotected  || #public

private:
    int a, b, c;

    // protected:

public:
    // we can Initialise the value in two ways

    // 1
    void setData(int a1, int b1, int c1);

    // 2
    void getData()
    {
        cout << "The Value of A is " << a << endl;
        cout << "The Value of B is " << b << endl;
        cout << "The Value of C is " << c << endl;
    }
}; //  remember there is the semicolon

// declaring the outward of the class
void sample ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    cout << "\nWelcome to C++ { Classes And Objects }" << endl;

    /*
    > C++ ->> Initially C++ called -->> c with classes by strousstroup
    > class - extension of structures ( in C )
    > classes can have properties
    > in Class we can make private, protected, public

    class syntax: 

    // In class bydefault statements are private
    // There are the Three methods in Classes #private || #pprotected  || #public

    class class_name
    {
        class_declaration;

    };

    --> limitations of structure
    1. members are public
    2. it has no methods 

    */
    return 0;
}