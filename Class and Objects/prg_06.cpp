// static allocation And Dynamic allocation

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
        cout<<"Average Marks is "<<avg<<endl;
    }
};

int main()
{
    // static allocation
    student stu;

    stu.put_marks();
    stu.show_avg();

    // dynamically allocation 
    // it's accesible using arrow operator ( -> )
    // size will be created the in heap

    student *s = new student;

    // accessing the member function
    s->put_marks();
    s->show_avg();

    return 0;
}