#include<iostream>
using namespace std;
union money
{
    char cash;
    int rice;
    float pounds;
    int rupees;
};
int main()
{
    union money jivan;
    jivan.cash='c';
    jivan.rice=32;
    jivan.pounds=89;
    jivan.rupees=100;
    cout<<jivan.cash<<endl;
    cout<<jivan.rice<<endl;
    cout<<jivan.pounds<<endl;
    cout<<jivan.rupees<<endl;
    return 0;
}