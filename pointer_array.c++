#include<iostream>
using namespace std;
int main()
{
    // basic example
    int a = 10;
    int* ptr = &a;
    cout<<" the value of a is "<<a<<endl;
    cout<<" the value of ptr is "<<*(ptr)<<endl;
    //using new  operator new is a keyword
    //int * p = new int(20);
    float * p = new float(20.31);
       cout<<" the value at address of p  is "<<*(p)<<endl;
       // create array and allocate memory dynamically
       int *arr =new int[3];
       arr[0] = 11;
       // method one
       //arr[1] = 12;
       //method two 
       *(arr+1) = 12;
       arr[2] = 13;
       cout<<" the value of arr[0] is "<<arr[0]<<endl;
       cout<<" the value of arr[1] is "<<arr[1]<<endl;
       cout<<" the value of arr[2] is "<<arr[2]<<endl;

       //use delete oprator  to delete array values
       //delete arr; //method one
       delete [] arr; //method two
       cout<<" the value of arr[0] is "<<arr[0]<<endl;
       cout<<" the value of arr[1] is "<<arr[1]<<endl;
       cout<<" the value of arr[2] is "<<arr[2]<<endl;


    return 0;
}