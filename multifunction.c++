#include<iostream>
using namespace std;
int multi(int a,int b){
return a*b;
}
int main()
{
    int a,b;
    cout<<"please enter value of i and j is "<<endl;
    cin>>a>>b;

    cout<<"the multiplication of a and b is "<<multi(a,b)<<endl;
    return 0;

}
// #include<iostream>
// using namespace std;
// int product(int a, int b)
// {
//     return a*b;
// }
// int main()
// {
//     int a,b;
//     cout<<"enter the value of a and b is ";
//     cin>>a>>b;
//     cout<<"the product of a and b  is "<<product (a,b)<<endl;
//     return 0;
// }