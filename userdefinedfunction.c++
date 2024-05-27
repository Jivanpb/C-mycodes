#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"please enter num1 value "<<endl;
    cin>>num1;
    cout<<"please enter num2 value "<<endl;
    cin>>num2;
    cout<<"the sum of num1 and num2 is "<<(num1+num2)<<endl;
    return 0;
}
int sum(int a,int b,int c)
{
    c=a+b;
    return c;
}