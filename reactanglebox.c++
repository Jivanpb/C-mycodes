#include<iostream>
using namespace std;
//rectangle box
int volume(int l,int b,int h){
    return (l*b*h); //length l breadth b height h 
}
int main()
{
    cout<<" the volume of reactangle with lenght  3,breadth 7 and hight 6 is "<<volume(3,7,6)<<endl;
  
    return 0;
}