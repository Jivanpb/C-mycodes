//constructor wit default arguments

#include <iostream>
using namespace std;
class simple
{
    int data1, data2,data3;

public:
    simple(int a, int b = 9,int c = 5)
    {
        data1 = a;
        data2 = b;        
        data3 = c;        

    }
    void printData();
};
void simple :: printData(){
    cout << "the value of data1 is " <<data1<< " and data2 is " <<data2<<" and data3 is "<<data3<<endl;
}
int main()
{
    simple s(1);
    s.printData();
    return 0;
}