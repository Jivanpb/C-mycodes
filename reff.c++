// swap function  not done 

// #include<iostream>
// using namespace std;
// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;
// }
//*********call by value********
// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int j=5;int p=10;
//     //cout<<"the value of a is 4  and value of b 5 is "<<sum(a,b)<<endl;
//     cout<<"the value of j is "<<j<<endl; 
//     cout<<"the value of p is "<<p<<endl;
//     swap(j,p);
//     cout<<"the value of j is "<<j<<endl;
//     cout<<"the value of p is "<<p<<endl;

//     return 0;
// }

// refference using pointer 
// #include<iostream>
// using namespace std;
// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;
// } 
// // call by refference by using pointers
// void swap(int*a,int*b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int j=5;int p=10;
//     //cout<<"the value of a is 4  and value of b 5 is "<<sum(a,b)<<endl;
//     cout<<"the value of j is "<<j<<endl; 
//     cout<<"the value of p is "<<p<<endl;
//     swap(&j,&p);
//     cout<<"the value of j is "<<j<<endl;
//     cout<<"the value of p is "<<p<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;
// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;
// } 
// call by refference by using  swaprefferencevar method and fuction******
void swapRefferencevar(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int j=5;int p=10;
    //cout<<"the value of a is 4  and value of b 5 is "<<sum(a,b)<<endl;
    cout<<"the value of j is "<<j<<endl; 
    cout<<"the value of p is "<<p<<endl;
    swapRefferencevar(j,p);
    cout<<"the value of j is "<<j<<endl;
    cout<<"the value of p is "<<p<<endl;

    return 0;
}