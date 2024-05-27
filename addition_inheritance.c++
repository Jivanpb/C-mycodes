#include <iostream>
using namespace std;

class J {
protected:
    int num1;

public:
    void set_value(int a) {
        num1 = a;
    }

    int get_value() {
        cout << "Enter the value of num1: ";
        cin >> num1;
        return num1;
    }
};

class P : public J {
protected:
    int num2;

public:
    void get_value_b() {
        cout << "Enter the value of num2: ";
        cin >> num2;
    }
};

class OP : public P {
public:
    void display() {
        cout << "The addition of num1 and num2 is " << (num1 + num2) << endl;
    }
};

int main() {
    OP o;
    o.get_value();
    o.get_value_b();
    o.display();
    return 0;
}
