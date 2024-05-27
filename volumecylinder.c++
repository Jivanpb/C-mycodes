#include<iostream>
using namespace std;
//calculate the volume of a cylinder 
int volume(double r,int h){
    return (3.14 * r * r * h);// radius height
}
int main()
{
  
    cout<<" the volume of cube  radius 3 and height 6 is  "<<volume(3,6)<<endl;
   
    return 0;
}