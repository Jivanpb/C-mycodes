// *********multiplication program using user defined fuction*********

// #include<iostream>
// using namespace std;
// int main()
// {
//     int j;
//     int p;
//     cout<<"the value of j is "<<endl;
//     cin>>j;
//     cout<<"the value of p is "<<endl;
//     cin>>p;
//     cout<<"the multiplication of j and p is "<<(j*p)<<endl;
//     return 0;
// }
// int multiplication(int a,int b,int s)
// {
//     s=(a*b);
//     return s;
// }

// *********substraction program using user defined fuction*********

// #include<iostream>
// using namespace std;
// int main()
// {
//     int j;
//     int p;
//     cout<<"the value of j is "<<endl;
//     cin>>j;
//     cout<<"the value of p is "<<endl;
//     cin>>p;
//     cout<<"the substraction of j and p is "<<(j-p)<<endl;
//     return 0;
// }
// int multiplication(int a,int b,int s)
// {
//     s=(a-b);
//     return s;
// }

// *********division program using user defined fuction*********

// #include<iostream>
// using namespace std;
// int main()
// {
//     int j;
//     int p;
//     cout<<"the value of j is "<<endl;
//     cin>>j;
//     cout<<"the value of p is "<<endl;
//     cin>>p;
//     cout<<"this is division opration and j divided by p is "<<(j/p)<<endl;
//     return 0;
// }
// int multiplication(int a,int b,int s)
// {
//     s=(a/b);
//     return s;
// }

// *********addiotion program using user defined fuction*********

#include<iostream>
using namespace std;
int sum(int,int);
void g(void);

int main()
{
    int j;
    int p;
    //void g(void);
    cout<<"the value of j is "<<endl;
    cin>>j;
    cout<<"the value of p is "<<endl;
    cin>>p;
    cout<<"the addition of j and p is "<<(j+p)<<endl;
    g();
    return 0;
}
int multiplication(int a,int b,int s)
{
    s=(a+b);
    return s;
}
void g(void)
{
cout<<"hello,good evening"<<endl;
}