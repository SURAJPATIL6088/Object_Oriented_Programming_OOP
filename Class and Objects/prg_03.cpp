// create the class and show it's info

#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    char div;

public:
    // default constructor
    Student()
    {
    }

    void setRoll(int a)
    {
        roll_no = a;
    }

    void getRoll()
    {
        cout << "Roll No : " << roll_no << endl;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << "Name : " << name << endl;
    }

    void setDiv(char d)
    {
        div = d;
    }

    void getDiv()
    {
        cout << "Div : " << div << endl;
    }
};

int main()
{

    int rn;
    string sn;
    char dv;

    cout << "For Student " << endl;
    cout << "Enter Your Roll No : " << endl;
    cin >> rn;

    cout << "Enter Your Name : " << endl;
    cin >> sn;

    cout << "Enter Your Division : " << endl;
    cin >> dv;

    Student stu; // object of the class

    stu.setRoll(rn);
    stu.setName(sn);
    stu.setDiv(dv);

    cout << "\nStudent Details\n";
    stu.getRoll();
    stu.getName();
    stu.getDiv();

    return 0;
}