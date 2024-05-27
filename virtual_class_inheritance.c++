
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void Set_rollnumber(int a)
    {
        roll_no = a;
    }
    void Print_roll_number(int)
    {
        cout << " the role number of student is: " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float Marathi;
    float Maths;
    float Physics;
    float English;

public:
    void Set_marks(float m1, float m2, float m3, float m4)
    {
        Marathi = m1;
        Maths = m2;
        Physics = m3;
        English = m4;
    }
    void Print_marks()
    {
        cout << " the marks of Mararhi is: " << Marathi << endl
             << "the marks of Maths is: " << Maths << endl
             << "the marks of Physics is: " << Physics << endl
             << "the marks of English is: " << English << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float sport_score;

public:
    void Set_score(float sc)
    {
        sport_score = sc;
    }
    void Print_score(float)
    {
        cout << " your score in sports is: " << sport_score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float Total;

public:
    void Display()
    {
        Total = Marathi + Maths + Physics + English + sport_score;
        Print_roll_number();
        Print_marks();
        Print_score();
        cout << " your Total Score is " << Total << endl;
    }
};
int main()
{
    Result Jivan;
    Jivan.Print_roll_number(10);
    Jivan.Set_marks(88.64, 75.34, 72.92, 83.12);
    Jivan.Print_score(8);
    Jivan.Display();
    return 0;
}