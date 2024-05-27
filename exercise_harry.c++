#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "enter the value of a: " << endl;
        cin >> a;
        cout << "enter the value of b: " << endl;
        cin >> b;
    }
    void PerformOperationSimple()
    {
        cout << "the addition of a and b is: " << a + b << endl;
        cout << "the substraction of a and b is: " << a - b << endl;
        cout << "the multiplication of a and b is: " << a * b << endl;
        cout << "the divison  of a and b is: " << a / b << endl;
    }
};
class ScientificCalculator
{
    int a, b;

public:
    void getData_Scientific()
    {
        cout << "enter the value of a: " << endl;
        cin >> a;
        cout << "enter the value of b: " << endl;
        cin >> b;
    }
    void PerformOperationScientific()
    {
        cout << "the addition of cos(a) is: " << cos(a) << endl;
        cout << "the substraction of sin(a) is: " << sin(a) << endl;
        cout << "the multiplication of tan(a) is: " << tan(a) << endl;
        cout << "the divison  of exp(a) is: " << exp(a) << endl;

        cout << "the addition of cos(b) is: " << cos(b) << endl;
        cout << "the substraction of sin(b) is: " << sin(b) << endl;
        cout << "the multiplication of tan(b) is: " << tan(b) << endl;
        cout << "the divison  of exp(b) is: " << exp(b) << endl;
        cout << "the divison  of ceil(a) is: " << ceil(a) << endl;
        cout << "the divison  of ceil(b) is: " << ceil(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
//     SimpleCalculator c1;
//     c1.getData();
//     c1.PerformOperation();

    // ScientificCalculator c1;
    // c1.getData();
    // c1.PerformOperation();
    HybridCalculator cl;
    cl.getDataSimple();
    cl.PerformOperationSimple();
    cl.getData_Scientific();
    cl.PerformOperationScientific();
    return 0;
}