#include<iostream>
using namespace std;
int main()
{
    int m1score[]={31,64,23,86,64,75,81,35,24};
    int i;
    int* m2=m1score;
     

    cout<<"the following marks are from sem i "<<endl;
    cout<<"the value of m1score with index 0 is "<<*(m2)<<endl;
    cout<<"the value of m1score with index 1 is "<<*(m2++)<<endl;
    cout<<"the value of m1score with index 2 is "<<*(m2+1)<<endl;
    cout<<"the value of m1score with index 3 is "<<*(m2+2)<<endl;
    cout<<"the value of m1score with index 4 is "<<*(m2+3)<<endl;
    cout<<"the value of m1score with index 5 is "<<*(m2+5)<<endl;
    cout<<"the value of m1score with index 6 is "<<*(m2+6)<<endl;
    cout<<"the value of m1score with index 7 is "<<*(m2+7)<<endl;
    cout<<"the value of m1score with index 8 is "<<*(m2+8)<<endl;
    // for(i=0;i<8;i++)
    // {
    //     cout<<"the marks gain by student in sem i "<<i<< " is "<<m1score[i]<<endl;
    // }
    return  0;


}