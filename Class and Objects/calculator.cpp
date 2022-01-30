// create the class calculator
// perform the addition, subtraction, multiplication, division operations
// finally connect the calculator.cpp to prg_07.cpp

class calculator
{
    // private:

    int n, n1;

public:
    
    // default constructor 
    calculator()
    {
        
    }

    int Add(int n, int n1)
    {
        int add = n + n1;
        return add;
    }

    int Sub(int n, int n1)
    {
        int sub = n - n1;
        return sub;
    }

    int Multi(int n, int n1)
    {
        int mul = n * n1;
        return mul;
    }

    int div(int n, int n1)
    {
        int div = n / n1;
        return div;
    }
};
