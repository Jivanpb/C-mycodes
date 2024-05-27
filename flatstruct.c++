#include<iostream>
using namespace std;

struct flat
{
    char  name;
    int age;
    char course;
    char joinmonth;
};
int main()
{
    struct flat karvenagar;
    //karvenagar.name='jivan';
    karvenagar.age=22;
    //karvenagar.course ='mca';
    //karvenagar.joinmonth='november';
    // cout<<"the name of boy is "<<karvenagar.name<<endl;
     cout<<"the name of boy is "<<karvenagar.age<<endl;
    // cout<<"the name of boy is "<<karvenagar.course<<endl;
    // cout<<"the name of boy is "<<karvenagar.joinmonth<<endl;
    return 0;
}