#include<iostream>
using namespace std;
int main()
{
    int a=10,b=11,c=12;
    // c=a+b;
    // cout<<"the sum of a and b is "<<a+b<<endl;
    if(a>b | b>c)
    {
        cout<<"given condition is true "<<a<<endl<<b<<endl<<c<<endl;
    }
    else
    {
        cout<<"the if condition is wrong"<<endl;
    }
    return 0;
}