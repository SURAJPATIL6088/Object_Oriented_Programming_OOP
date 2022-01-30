// friend function

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

    // Basic syntax --
    // friend <return-type> method_name (class_name class_object)
    // class_object will access all the data from the class
    friend int show_avg(student s)
    {
        /*
            show_avg is a friend of the class student therefore show_avg function
            will directly access all the data of the student
        */
        int avg = (s.m1 + s.m2 + s.m3) / 3;
        return avg;
    }
};

int main()
{
    student stu;

    stu.put_marks();

    // here we give the class inside its method
    cout << "Average Marks is " << show_avg(stu);

    return 0;
}