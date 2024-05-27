#include<iostream>
using namespace std;
 class complex
{
    int a;
    int b;
    public:
    int SetData(int v1,int v2)
    a = v1;
    b = v2;
}
int setDatabySum(complex o1,complex o2)
{
    a = o1.a + o2.b;
    b = o1.a + o2.b;
}
void printNumber(int a,int b)
{
    cout<<"the complex number is "<<a<<" + " <<b<< "i" <<endl;
}
int main();
{
    complex c1,c2,c3;
    c1.SetData(1,2);
    c1.printNumber();

    c2.SetData(3,4);
    c2.printNumber();
    
    c3.SetDataBySum(5,6);
    c3.printnumber();
    return  0;
    
    

// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<" Jivan Bhosale"<<endl;
// }