#include<iostream>
#include<iomanip>
using namespace std;
// int main()
// {
//     int a=12;
//     cout<<"the value of a is"<<setw(5)<<a<<endl;
// }

int main()
{
    int age;
    cout<<"please tell me your age "<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<" sorry dear you are not eligible for this trip"<<endl;

    }
    else if(age==18)
    {
        cout<<"you are eligible but you need a permission from your parent"<<endl;
    }
    else
    {
        cout<<" hello you are eligible and enjoys your trip"<<endl;
    }
}