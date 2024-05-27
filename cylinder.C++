#include<iostream>
using namespace std;
//calculate the volume of a cylinder 
int volume(double r,int h){
    return (3.14 * r * r * h);// radius height
}
//calculate the volume of cube
int volume(int a){
    return (a * a * a);
}
//rectangle box
int volume(int l,int b,int h){
    return (l*b*h); //length l breadth b height h 
}
int main()
{
    cout<<" the volume of reactangle 3,7,6 is "<<volume(3,7,6)<<endl;
    cout<<" the volume of cylinder  radius 3 and height 6 is  "<<volume(3,6)<<endl;
    cout<<" the volume  cube o side  3 is "<<volume(3)<<endl;
    return 0;
}