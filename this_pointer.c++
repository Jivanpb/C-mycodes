#include<iostream>
using namespace std;
class A{
    int a;
    public:
    int setdata(int a){
       this -> a = a;
    }
    void getdata(){
        cout<<" the value of a is "<<a<<endl;
    }
};
int main()
{
    A a;
    a.setdata(10);
    a.getdata();
    return 0;
}