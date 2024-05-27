#include<iostream>
using namespace std;
//forward declaration
class Y;
 class X{
    int data;
    public:
         void SetValue(int value){
            data=value;
         }
        friend void add(X,Y);
 };
 class Y{
    int num;
    public:
         void SetValue(int value){
            num=value;
         }
        friend void add(X,Y);
 };
 void add(X o1,Y o2){
    cout<<"Suming data of X and Y objects gives me "<<o1.data + o2.num;
 }
 int main()
 {
    X a1;
    a1.SetValue(3);
    Y b1;
    b1.SetValue(5);
    add(a1,b1);
    return 0;

 }