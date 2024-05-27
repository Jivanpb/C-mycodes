// // refference variable in c++
// #include<iostream>
// using namespace std;
// int num(num1,num2);
// int main()
// {
//     int a=10;
//     int b=20;
//     cout<<"the value of a is "<<a<<endl" the value of b is "<<b<<endl;
//     num();
//     return 0;
// }
// int num(num1 ,num2)
// {
//     int num1=&a;
//     int num2=&b;
//     cout<<"the value of num1 is "<<num1<<endl" the value of num2 is "<<num2<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int a=100;
    b*a;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the  address of a is "<<&a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the address of b is "<<&b<<endl;
    return 0;
}