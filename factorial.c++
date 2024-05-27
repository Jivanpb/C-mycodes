#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
    return 1;
    }
    return fib(n-2) + fib(n-1);
}
int factorial(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int a;
    cout<<" enter the value of a "<<endl;
    cin>>a;
    cout<<"the factorial number is "<<a<< " is "<<factorial(a)<<endl;
    return 0;
}