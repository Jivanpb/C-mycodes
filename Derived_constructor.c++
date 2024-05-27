#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor called" << endl;
    }

    void Printdata1(void)
    {
        cout << " the value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int b)
    {
        data2 = b;
        cout << "Base2 class constructor called" << endl;
    }
    void Printdata2(void)
    {
        cout << " the value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << " Derived class contructor called " << endl;
    }
    void Derived_printdata(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived Jivan(1, 2, 3, 4);
    Jivan.Printdata1();
    Jivan.Printdata2();
    Jivan.Derived_printdata();
    return 0;
}
