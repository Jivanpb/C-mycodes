#include <iostream>
using namespace std;
// this is our base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        int salary = 20;
    }
    Employee() {}
};
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int Languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
 int main()
{
    Employee Harry(1), Rohan(2);
    cout << Harry.salary << endl;
    cout << Rohan.salary << endl;
    Programmer SkillF(14);
    cout<<SkillF.Languagecode<<endl;
    cout<<SkillF.id<<endl;
    SkillF.getdata();
    return 0;
}