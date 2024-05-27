#include<iostream>
using namespace std;
class constructorTest{
    public:
    constructorTest()
    {
        cout<<"constructor create successfull";
    }
};
int main()
{
    constructorTest ob;
    return 0;
}