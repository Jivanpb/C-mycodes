#include <iostream>
using namespace std;
class Base
{
public:
    int var_Base;
    void Display()
    {
        cout << " Base Class Display function called " << var_Base << endl;
    }
};
class Derived : public Base 
{
public:
    int var_derived;
    void Display()
    {
        cout << " Base Class Display function called " << var_Base << endl;

        cout << " Derived Class Display function called " << var_derived << endl;
    }
};
int main()
{
    Base * Base_class_pointer;
    Base obj_Base;
    // Derived * Derived_int_pointer;
    Derived obj_Derived;
    Base_class_pointer = &obj_Derived;
    // Pointing Base class pointer to derived obj_derived
    Base_class_pointer->var_Base = 20;
    Base_class_pointer->Display();
    return 0;
}