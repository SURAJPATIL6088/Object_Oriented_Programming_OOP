#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class t1, class t2>
class Data
{
    private:
    string Name1, Name2;
    int num1 , num2;
    float fun1, fun2;

    public:

    void readDataName( t1 N1, t2 N2)
    {
        cin>>Name1>>Name2;
    }

    void readDataInt( t1 n1, t2 n2)
    {
        cin>>num1>>num2;
    }

    void readDataFloat( t1 f1, t2 f2)
    {
        cin>>fun1>>fun2;
    }

    void display()
    {
        cout<<this->(Name1+Name2)<<endl;
        cout<<this->(num1+num2)<<endl;
        cout<<this->(fun1+fun2)<<endl;
    }
};


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string na1, na2;
    Data<string,string> readDataName(na1, na2);
    

    return 0;
}