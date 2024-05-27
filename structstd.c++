#include<iostream>
using namespace std;
struct library
{
    char name;
    int fees;
    char slot;
};
int main()
{
    struct library studyqubes;
    studyqubes.name='j';
    studyqubes.fees=340;
    studyqubes.slot='e';
    struct library studyqubes1 ;
    studyqubes1.name='a';
    studyqubes1.fees=840;
    studyqubes1.slot='n';
    struct library studyqubes2;
    studyqubes2.name='p';
    studyqubes2.fees=680;
    studyqubes2.slot='d';
    cout<<"the record found of jivan is "<<studyqubes.name<<endl;
    cout<<"the record found of jivan is "<<studyqubes.fees<<endl;
    cout<<"the record found of jivan is "<<studyqubes.slot<<endl;
    cout<<"the record found of ajinkya  is "<<studyqubes1.name<<endl;
    cout<<"the record found of ajinkya is "<<studyqubes1.fees<<endl;
    cout<<"the record found of ajinkya is "<<studyqubes1.slot<<endl;
    cout<<"the record found of pratik  is "<<studyqubes2.name<<endl;
    cout<<"the record found of pratik is "<<studyqubes2.fees<<endl;
    cout<<"the record found of pratik is "<<studyqubes2.slot<<endl;
    return 0;
}