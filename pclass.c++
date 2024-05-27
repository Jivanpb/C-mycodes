#include<iostream>
using namespace std;
class jivan{
    public:
    int age;
    char favchar;
};
int main(){
    jivan p1;
    p1.age=22;
    p1.favchar='p';
    cout<<" the age of class p member is "<<p1.age<<endl;
    cout<<" the favchar of class p member is "<<p1.favchar<<endl;
    return 0;
}