#include<iostream>
using namespace std;
struct team
{
    int jearsynumber;
    float salary;
    char favchar;
};
int main()
{
    struct team t1;
    t1.jearsynumber=12;
    t1.salary=4000000;
    t1.favchar='p';
    cout<<"the team player  jearsy number is  "<<t1.jearsynumber<<endl;
    cout<<"the team player  salary is  "<<t1.salary<<endl;
    cout<<"the team player  favchar in cricket  is  "<<t1.favchar<<endl;
    return 0;
}