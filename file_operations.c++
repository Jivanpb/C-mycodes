#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // // connecting our file with std
    // ofstream  std("sample60.txt");
    // //creating a name string and filling it with the string entered by user 
    // string name;
    // cout<<" Enter your name: ";
    // cin>>name;
    // std<<name;
    // //writing a string to the file 
    // //std<<" my name is " + name;
    // std.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<" the content of this file is "<<content<<endl;
    getline(hin,content);
    hin.close();
     return 0;
}