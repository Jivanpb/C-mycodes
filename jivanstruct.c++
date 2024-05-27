#include<iostream>
using namespace std;
 struct  rssoftech
 {
    int rolenumber;
    int salary; 
 };
 int main()
 {
    struct rssoftech jivan;
    jivan.rolenumber=5;
    jivan.salary=49400;
    cout<<"the role number of jivan is "<<jivan.rolenumber<<endl;
    cout<<"the salary number of jivan is "<<jivan.salary<<endl;

    struct rssoftech vaibhav;
    vaibhav.rolenumber=4;
    vaibhav.salary=32000;
    cout<<"the role number of vaibhav is "<<vaibhav.rolenumber<<endl;
    cout<<"the salary of salary is "<<vaibhav.salary<<endl;



    return 0;
 }