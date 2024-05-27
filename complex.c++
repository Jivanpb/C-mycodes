// /*create a function which take two point objects and compute the distance between those22 points
// hind use friend function
// distance between (1,1) and (1,1)is 0
// distance between (o,1) and (0,6)is 5
// distance between (1,0) and (70,6)is 69
// use this to chaeck your code
// */

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     complex()
//     {
//         a = 0;
//         b = 0;
//     }
//     complex(int x, int y)
//     {
//        a = x;
//        b = y;
//     }
//     complex(int x)
//     {
//         a = x;
//         b = 0;
        
//     }
//     int SetNumber()
//     {
//         cout << " your value is " << a << " + " << b << " i " << endl;
//     }
// };
// int main()
// {
//     complex p1;
//     p1.SetNumber(22,20);

//     complex p2;
//     p2.SetNumber(21);

//     complex p3;
//     p3.SetNumber();

//     return 0;
// }
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
        cout << "Your value is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex p1(22, 20);
    p1.SetNumber();

    complex p2(21);
    p2.SetNumber();

    complex p3;
    p3.SetNumber();

    return 0;
}
