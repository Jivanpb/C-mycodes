#include<iostream>
using namespace std;
template<class t1=int,class t2=char,class t3=int>
class jivan{
    public:
    t1 a;
    t2 b;
    t3 c;
    jivan(t1 x,t2 y,t3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<" the value of a is: "<<a<<endl;
        cout<<" the value of b is: "<<b<<endl;
        cout<<" the value of c is: "<<c<<endl;
        cout<<" jivan date of birth is "<< a<< b << c <<endl;
    }
};
int main()
{
    jivan<> p(10,'f',2002);
    p.display();
    cout<<endl;
    jivan <int ,int ,int> j(10,02,2002);
    j.display();
    return 0;
} 