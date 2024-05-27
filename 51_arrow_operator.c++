#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    int Set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void Get_data(void)
    {
        cout << " the value of real is: " << real << endl;
        cout << " the value of imaginary is: " << imaginary << endl;
    }
};
int main()
{
    /* 1) method one*****
   Complex *ptr = new Complex;
    (*ptr).Set_data(10, 20);
    (*ptr).Get_data();
    */
    

    /* 2) method two
    Complex c1;
    c1.Set_data(10,20);
    c1.Get_data();
    */
   ///3) method three arrow operatot
    Complex *ptr = new Complex;
    ptr-> Set_data(10,20);
    ptr-> Get_data();
        

       // together array of object
       Complex *ptr1 = new Complex[4];
       ptr1-> Set_data(30,40);
       ptr1-> Get_data();

    return 0;
}