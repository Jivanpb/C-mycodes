#include<iostream>
using namespace std;
template <class t1,class t2,class t3>
class jivan{
    t1 data1;
    t2 data2;
    t3 data3;
    public:
    jivan(t1 a,t2 b,t3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl<<this->data3;
    }
};
int main()
{
    //jivan <int ,char > obj (1,'p');
    //obj.display();
        jivan <int,char,int> obj1 (10,'f',2002);
            obj1.display();
 

    return 0;
} 