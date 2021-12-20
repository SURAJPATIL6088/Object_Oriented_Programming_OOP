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
    int n;
    cout << "Enter the Number of Student : " << endl;
    cin >> n;

    int rn[n];
    string sn[n];
    char dv[n];

    for (int i = 0; i < n; i++)
    {
        cout << "For Student " << (i + 1) << endl;
        cout << "Enter Your Roll No : " << endl;
        cin >> rn[i];

        cout << "Enter Your Name : " << endl;
        cin >> sn[i];

        cout << "Enter Your Division : " << endl;
        cin >> dv[i];
    }
    Student stu;  // object of the class

    for (int i = 0; i < n; i++)
    {
        stu.setRoll(rn[i]);
        stu.setName(sn[i]);
        stu.setDiv(dv[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nFor Student " << (i + 1) << endl;
        stu.getRoll();
        stu.getName();
        stu.getDiv();
    }
    return 0;
}