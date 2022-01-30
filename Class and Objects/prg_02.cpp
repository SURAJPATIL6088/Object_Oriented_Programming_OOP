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
    int x, y, z;

    // create the class object
    sample s;

    // here we accept the values from the user
    cout << "Enter the Value of A " << endl;
    cin >> x;

    cout << "Enter the Value of B " << endl;
    cin >> y;

    cout << "Enter the Value of C " << endl;
    cin >> z;

    s.setData(x, y, z);
    s.getData();
    
    return 0;
}