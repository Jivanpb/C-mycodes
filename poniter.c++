#include<iostream>
using namespace std;
int main()
{
    int j=12;
    int * p=&j;
    int ** l=&p;
    cout<<"the value  of j is "<<j<<endl;
    cout<<"the address  of j is "<<&j<<endl;
    cout<<"the value of p is "<<*p<<endl;
    cout<<"the address of p is "<<&p<<endl;
    cout<<"the value store in p is "<<p<<endl;
    cout<<"the address of l is "<<l<<endl;
    cout<<"the value of (pointer to pointer)(l) is "<<**l<<endl;
    return 0;
}