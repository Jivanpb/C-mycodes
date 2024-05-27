#include <iostream>
using namespace std;
class Base
{
public:
    int var_Base = 1;
    virtual void Display()
    {
        cout << " 1 Base Class Display function called " << var_Base << endl;
    }
};
class Derived : public Base 
{
public:
    int var_derived = 2;;
      void Display()
    {
        cout << "2  Base Class Display function called " << var_Base << endl;

        cout << " 2 Derived Class Display function called " << var_derived << endl;
    }
};
int main()
{ 
        Base * Base_class_pointer;
        Base obj_Base;
        Derived obj_Derived;
        Base_class_pointer = &obj_Derived;
        Base_class_pointer->Display();
        // Derived *dptr;
        // Derived obj_Derived;
        // Base obj_Base;
        // dptr = &obj_Base;
        // dptr->Display();
        
        return 0;
}