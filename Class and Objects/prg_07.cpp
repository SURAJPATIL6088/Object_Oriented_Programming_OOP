// here we perform the basic 4 operations 
// also here we connect the class calculator

#include <iostream>
#include "calculator.cpp"

using namespace std;

int main()
{
    // it requires the default constructor
    calculator c;

    int a, b;
    cout<<"Enter the value of A : ";
    cin>>a;

    cout<<"Enter the value of B : ";
    cin>>b;
    
    cout<<"Addition is "<<c.Add(a, b)<<endl;

    cout<<"Subtraction is "<<c.Sub(a, b)<<endl;

    cout<<"Multiplication is "<<c.Multi(a, b)<<endl;

    cout<<"Division is "<<c.div(a, b)<<endl;

    return 0;
}