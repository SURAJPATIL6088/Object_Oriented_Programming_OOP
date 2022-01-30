/*
-> Here we learn what is the classes
-> initialization of the classes
-> object creation and accessing the member function of the classes
*/

#include <iostream>
using namespace std;

// class syntax
/*

class class_name
{
    //private:

    // protected:

    // public:

};
*/

class sample
{
    // In class bydefault statements are private
    // There are the Three methods in Classes #private || #protected  || #public

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

    class class_name
    {
        class_declaration;

    };

    --> limitations of structure
    1. members are public
    2. it has no methods 

    */

   // creation of the object of the class 
   sample smp;

    // accessing the member function of the classes
    smp.setData(10, 20, 30);
    smp.getData();

    return 0;
}