// #include<iostream>
// using namespace std;
// class complex1
// {
// public:
//     int a;
//     int b;

//     void setData(int v1,int v2){
//        a = v1;
//        b = v2;
//     }
//      void SetDataBySum(complex o1,complex o2)
//     {
//              o1 = o1.a + o2.a;
//             o2 = o1.b + o2.b;
//     }
//      void printNumber()
//     {
//      cout<<"your sum is " << a << " +  " << b << "i" <<endl;
//     }
// };
// int main()
// {
//     complex1 c1,c2,c3;
//     c1.setData(1,2);
//     c1.printNumber();

//     c2.setData(3,4);
//     c2.printNumber();

//     c3.SetDataBySum(c1,c2)
//     c3.printNumber();
//     return 0;
// }

#include<iostream>
using namespace std;

class complex1
{
public:
    int a;
    int b;

    void setData(int v1, int v2)
    {
        a = v1; // Removed int declaration to assign values to class members
        b = v2;
    }

    void SetDataBySum(complex1 o1, complex1 o2) // Changed parameter types to complex1
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "your sum is " << a << " + " << b << "i" << endl; // Corrected output format
    }
};

int main()
{
    complex1 c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.SetDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}
