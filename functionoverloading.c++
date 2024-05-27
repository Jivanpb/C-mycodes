 #include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using 2 argument function"<<endl;
    return a+b;
    // cout<<"using 2 argument function"<<endl;

}
int sum(int a, int b,int c){
    cout<<"using 3 argument fuction"<<endl;
    return a+b+c;
    // cout<<"using 3 argument fuction"<<endl;
    
};
int main()
{
    int i=10;
    int j=20;
    int p=30;
    cout<<"the addition of i and j is "<<sum(i,j)<<endl;
    cout<<"the addition of i,j and p is "<<sum(i,j,p)<<endl;
    return 0;
}