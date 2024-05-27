#include<iostream>
using namespace std;

class Parent {
    public:
    int num1;

// public:
    int num2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Parent::setdata(void) {
    num1 = 100;
    num2 = 200;
}

int Parent::getdata1() {
    return num1;
}

int Parent::getdata2() {
    return num2;
}

class Child : public Parent {
    int sub;

public:
    void process();
    void display();
};

void Child::process() {
    sub = num2 - num1;
}

void Child::display() {
    cout << "the num1 is " << getdata1() << endl;
    cout << "the num2 is " << num2 << endl;
    cout << "the subtraction of num1 and num2 is " << sub << endl;
}

int main() {
    Child c;
    c.setdata();
    c.process();
    c.display();
    return 0;
}
