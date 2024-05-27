#include<iostream>
using namespace std;
struct employee 

{
    int age;
    int salary;

};
 union money
 {
    union money m1;
    int rice;
    float pounds;
    char bike;
 };
 int main()
 {
        struct employee jivan;
        union money m1;
        m1.rice=34;
        cout<<m1.rice<<endl;
        return 0;
 }
    
