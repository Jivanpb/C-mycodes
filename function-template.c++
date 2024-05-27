 #include<iostream>
using namespace std;
// float funcAverage1(int a, int b){
//     float avg= (a+b)/2.0; 
//     return avg;
// }
//     float funcAverage2(int a, int b){
//     float avg= (a+b)/2.0; 
//     return avg;
// }
template <class t>
void swapp(t &a,t &b){
    t temp = a;
    a=b;
    b=temp;
}

template <class t1,class t2>
 float funcAverage(t1 a, t2 b){
    float avg= (a+b)/2.0; 
    return avg;
 }
int main(){
    float a;
    a = funcAverage(10,5);
    printf("The average of these numbers is %.3f\n",a);
    //  //float a;
    // a = funcAverage1(10,7.25);
    // printf("The average of these numbers is %.3f",a);
    int x = 5;
    int y = 10;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}
