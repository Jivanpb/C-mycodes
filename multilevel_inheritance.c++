#include <iostream>
using namespace std;
class Student
{
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student :: get_roll_number(void)
{
    cout << "the roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam :: set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << " the marks obtained in maths are : " << maths << endl;
    cout << " the marks obtained in physics are : " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << " your percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{
/*notes 
if we are inheriting b from a and c from b : a--->b---->c
    1. a is the base class for b, and b is the base class for c
    2.a----->b----->c is called inheritance path
    */
    Result jivan;
    jivan.set_roll_number(10);
    jivan.set_marks(87.14,91.12);
    jivan.display_results();
    // Result jivya;
    // jivya.set_roll_number(10);
    // jivya.set_marks(87.31,47.33);
    // jivya.display_results();
    return 0;
}