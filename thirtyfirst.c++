#include<iostream>
using namespace std;

struct employee
{
    int eId;
    char name;
    int age;
    int salary;
};
    int main()
    {
        struct employee jivan;
        jivan.eId=12;
        //jivan.name='jivanbhosale';
        jivan.age=22;
        jivan.salary=32000;
        cout<<"the information of employee eid is  "<<jivan.eId<<endl;
        //cout<<"the information of employee name is "<<jivan.name<<endl;
        cout<<"the information of employee  age is "<<jivan.age<<endl;
        cout<<"the information of employee salary is "<<jivan.salary<<endl;
        return 0;
    }