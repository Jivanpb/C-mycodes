#include<iostream>
using namespace std;
class base1{
    protected:
    int base1int;
    public:
    void set_value_base1int(int a){
        base1int = a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_value_base2int(int b){
        base2int = b;
    }
};
class base3{
    protected:
    int base3int;
    public:
    void set_value_base3int(int c){
        base3int = c;
    }
};
class Derived : public base1,public base2,public base3{
    public:
    void display(){
        cout<<"the value of base1int is "<<base1int<<endl;
        cout<<"the value of base2int is "<<base2int<<endl;
        cout<<"the value of base2int is "<<base3int<<endl;
        cout<<"the  sum of base1int  and base2int is "<<base1int + base2int + base3int<<endl;
    }
};
int main()
{
    Derived d;
    d.set_value_base1int(10);
    d.set_value_base2int(15);
    d.set_value_base3int(20);
    d.display();
    return 0; 
    

}