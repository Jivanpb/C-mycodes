#include<iostream>
using namespace std;
class employee{
    public:
    int age;
    char favchar;
};
int main()
{
    class employee e;
    e.age=21;
    e.favchar='j';
    
    cout<<"the age of employee is "<<e.age<<endl;
    cout<<"the favchar of employee is "<<e.favchar<<endl;

    employee myemp;
   myemp.age=22;
    myemp.favchar='p';
    cout<<"the age of employee is "<<myemp.age<<endl;
    cout<<"the favchar of employee is "<<myemp.favchar<<endl;
    //class employee=new emp();
    return 0;
}