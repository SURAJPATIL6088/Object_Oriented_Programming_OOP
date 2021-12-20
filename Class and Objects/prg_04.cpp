// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class Number_System
{
private:
    string s;

public:
    void enter_bin(void)
    {
        cout << "Enter the Binary Number : " << endl;
        cin >> s;
    }

    void chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "It's Not Binary Number !!" << endl;
                exit(0);
            }
        }
    }

    void ones_complement(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
    }

    void ans_ones_complement(void)
    {
        cout << "Answer of the Binary Number : " << endl;
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
    }
};

int main()
{
    Number_System ns;
    int t;

    cout << "\nEnter the Number of Testcases : " << endl;
    cin >> t;

    while (t--)
    {
        ns.enter_bin();
        ns.chk_bin();

        ns.ones_complement();
        ns.ans_ones_complement();
    }
    return 0;
}