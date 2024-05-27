// #include <iostream>
// using namespace std;
// class SimpleCalculator
// {
// public:
//     int num1, num2, num3;
//     void set_number(int a, int b, int c)
//     {
//         num1 = a;
//         num2 = b;
//         // num3 = c;
//     }
//     void set_value(int, int, int)
//     {
//         cout << " enter the value of a " << num1 << endl;
//         cout << " enter the value of a " << num2 << endl;
//         // cout<<" enter the sum of num1 and num2 is  "<<(num1+num2)<<endl;
//     }
// };
// class Operation : public simplecalculator
// {
// public:
//     int addop(int)
//     {
//         cout << " the addition two numbers is " << (num1+ num2) << endl;
//     }
//     int subop(int)
//     {
//         cout << " the sumbstraction two numbers is " << (num1 - num2) << endl;
//     }
//     int multiop(int)
//     {
//         cout << " the addition two numbers is " << (num1 * num2) << endl;
//     }
//     int divideop(int)
//     {
//         cout << " the addition two numbers is " << (num1 / num2) << endl;
//     }
// };
// int main()
// {
//     Operation c;
//     c.set_value(10, 20);
//     c.addop();
//     return 0;
// }

#include <iostream>
using namespace std;

class SimpleCalculator
{
public:
    int num1, num2;

    void set_number(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void set_value()
    {
        cout << "Enter the value of num1: " << num1 << endl;
        cout << "Enter the value of num2: " << num2 << endl;
    }
};

class Operation : public SimpleCalculator
{
public:
    int addop()
    {
        cout << "The addition of two numbers is: " << (num1 + num2) << endl;
    }

    int subop()
    {
        cout << "The subtraction of two numbers is: " << (num1 - num2) << endl;
    }

    int multiop()
    {
        cout << "The multiplication of two numbers is: " << (num1 * num2) << endl;
    }

    int divideop()
    {
        if (num2 != 0)
            cout << "The division of two numbers is: " << (num1 / num2) << endl;
        else
            cout << "Cannot divide by zero." << endl;
    }
};

int main()
{
    Operation c;
    c.set_number(10, 20);
    c.set_value();
    c.addop();
    c.subop();
    c.multiop();
    c.divideop();

    return 0;
}

