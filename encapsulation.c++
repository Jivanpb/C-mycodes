#include<iostream>
using namespace std;
class jivan{
    private:
    int year;
    public:
    int setData(int a){
        year = a;

    }
    void Display(){
        cout<<" the favroute  year of jivan is "<<year<<endl;
    }
};

int main()
{
    jivan j;
    j.setData(2002);
    j.Display();
    return 0;
}