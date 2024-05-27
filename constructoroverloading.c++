#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
       a = x;
       b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
        
    }
    void SetNumber()
    {
        cout << " your value is " << a << " + " << b << " i " << endl;
    }
};
int main()
{
    complex p1(22,20);
    p1.SetNumber();

    complex p2(21);
    p2.SetNumber();

    complex p3;
    p3.SetNumber();

    return 0;
}