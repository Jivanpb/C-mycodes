#include<iostream>
using namespace std;
class base1{
    public:
    void say(){
        cout<<" hello friend "<<endl;
    }
};
class base2{
    public: 
    void say(){
    cout<<" hello my frineds"<<endl;
    }
};
class derived : public base1,public base2{
    int a;
    public:
    void say(){
    base2:: say();
    }
};
int main()
{
    base1 b;
    b.say();
    base2 j;
    j.say();
    derived d;
    d.say();
    return 0;
}