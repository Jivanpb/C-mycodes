#include<iostream>
using namespace std;
class employee{
   private:
    int a,b,c;
    public:
    string name;
    int age;
    void setdata(int a,int b,int c);
    void getdata(){
        cout<<"enter the value of a "<<a<<endl;
                cout<<"enter the value of b "<<b<<endl;
                        cout<<"enter the value of c "<<c<<endl;
                                cout<<"enter the value of name "<<name<<endl;
                                        cout<<"enter the value of age "<<age<<endl;




    }
};
    void employee :: setdata(int a1,int b2,int c3){
    a=a1;
    b=b2;
    c=c3;
}
int main()
{
    employee jivan;
    //jivan.a=21;
    //jivan.b=22;
    //jivan.c=23;
    
    jivan.name=("jivan");
    jivan.age=23;
    jivan.setdata(11,12,33);
    jivan.getdata();
    return 0;
}

