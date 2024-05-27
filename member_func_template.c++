#include<iostream>
using namespace std;
template <class t>
class jivan{
    public:
    t data;
    jivan(t a){
        data = a;
    }
    void display();
};
template <class t>
void jivan<t>:: display(){
    cout<<data;
}
void func(int a){
    cout<<" i am first func()"<<a<<endl;//exact match tekes the highest priority
}
template <class t>
void func(t a){
    cout<<" this is templatised first func()"<<a<<endl;
}
template <class t>
void func1(t a){
    cout<<" this is templatised first func(): "<<a<<endl;
}
int main(){
   // jivan<int> j(10);
    //jivan<float> j(10.19);
    // jivan<char> j('p');
    // j.display();
    //func(4);//exact match tekes the highest priority
    func1(4); 
    return 0;
}