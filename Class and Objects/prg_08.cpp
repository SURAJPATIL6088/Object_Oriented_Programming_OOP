// Destructor

#include <iostream>
using namespace std;

class student
{
private:
    int m1, m2, m3;

public:
    void put_marks()
    {
        cout << "Enter the Marks if Subject 1 : ";
        cin >> m1;

        cout << "\nEnter the Marks if Subject 2 : ";
        cin >> m2;

        cout << "\nEnter the Marks if Subject 3 : ";
        cin >> m3;
    }

    void show_avg()
    {
        int avg = (m1 + m2 + m3) / 3;
        cout << "Average Marks is " <<avg<<endl;
    }

    // it will run upto two times
    // 1. static allocation
    // 2. dynamic allocation
    ~student()
    {
        cout<<"Destructor Bhai Invoked !!"<<endl;
    }
};

int main()
{
    // static allocation
    // in statis allocation destructor are created automatically
    student stu;

    stu.put_marks();
    stu.show_avg();

    // Dynamic Allocation
    // in Dynamic allocation destructor are not created automatically
    // we have to call manually
    student *s = new student;

    s->put_marks();
    s->show_avg();

    // manually destructor called
    delete s;

    return 0;
}