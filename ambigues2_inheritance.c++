#include <iostream>
using namespace std;
class b
{
public:
    void say()
    {
        cout << " hello dear " << endl;
    }
};
class d : public b
{
    int a;

//public:
    // void say()
    // {
    //     cout << " hello my afrined  " << endl;
    // }
};
int main()
{
    b b;
    b.say();
    d d;
    d.say();
    return 0;
}
