// Implementation of stack

#include <bits/stdc++.h>
using namespace std;

#define max 100
int top = -1;

class Stack
{
private:
    int n, stack[max];

public:
    void Add_element()
    {
        if (top == max - 1)
        {
            cout << "Stack is Full!!" << endl;
        }
        else
        {
            cout << "Enter the Element to be inserted : " << endl;
            cin >> n;

            top++;
            stack[top] = n;
        }
    }

    void peek_element()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Top element is " << stack[top] << endl;
        }
    }

    void Delete_element(void)
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            int del_ele;
            del_ele = stack[top];
            top--;

            cout << "Element Deleted is " << del_ele << endl;
        }
    }

    void display(void)
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }
        }
    }
};

int main()
{
    Stack stk;

    int choice;
    cout << "STACK DATA STRUCTURE" << endl;

    cout << "---------------------------------------" << endl;

    cout << "1. PUSH" << endl
         << "2. POP" << endl
         << "3. PEEK" << endl
         << "4. DISPLAY" << endl
         << "5. EXIT" << endl;

    do
    {
        cout << "\nEnter Your choice of Operation : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            stk.Add_element();
            break;
        }
        case 2:
        {
            stk.peek_element();
            break;
        }
        case 3:
        {
            stk.Delete_element();
            break;
        }
        case 4:
        {
            stk.display();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Enter the Valid Number !!" << endl;
            break;
        }
        }

    } while (choice != 5);
    return 0;
}