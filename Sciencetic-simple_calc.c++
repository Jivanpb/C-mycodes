// #include<iostream>
// #include<cmath>
// class SimpleCalculator {
//     int a, b;
//     public:
//         int getDataSimple()
//         {
//             cout<<"Enter the value of a"<<endl;
//             cin>>a;
//             cout<<"Enter the value of b"<<endl;
//             cin>>b;
//         }

//         void performOperationsSimple(){
//             cout<<"The value of a + b is: "<<a + b<<endl;
//             cout<<"The value of a - b is: "<<a - b<<endl;
//             cout<<"The value of a * b is: "<<a * b<<endl;
//             cout<<"The value of a / b is: "<<a / b<<endl;
//         }
// };

// class ScientificCalculator{
//     int a, b;

//     public:
//         int getDataScientific()
//         {
//             cout << "Enter the value of a" << endl;
//             cin >> a;
//             cout << "Enter the value of b" << endl;
//             cin >> b;
//         }

//         void performOperationsScientific()
//         { 
//             cout << "The value of cos(a) is: " << cos(a) << endl;
//             cout << "The value of sin(a) is: " << sin(a) << endl;
//             cout << "The value of exp(a) is: " << exp(a) << endl;
//             cout << "The value of tan(a) is: " << tan(a) << endl;
//         }
// };
// class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
// };
// int main()
// {
//     HybridCalculator calc;
//     calc.getDataScientific();
//     calc.performOperationsScientific();
//     calc.getDataSimple();
//     calc.performOperationsSimple();
    
//     return 0;
// }

#include<iostream>
#include<cmath> // Include <cmath> for math functions

using namespace std; // Include the std namespace

class SimpleCalculator {
    int a, b;
public:
    void getDataSimple() // Change return type to void
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void performOperationsSimple(){
        if(b != 0) {
            cout << "The value of a + b is: " << a + b << endl;
            cout << "The value of a - b is: " << a - b << endl;
            cout << "The value of a * b is: " << a * b << endl;
            cout << "The value of a / b is: " << a / b << endl;
        } else {
            cout << "Cannot divide by zero." << endl;
        }
    }
};

class ScientificCalculator{
    int a;

public:
    void getDataScientific() // Change return type to void
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
    }

    void performOperationsScientific()
    { 
        // Convert angle 'a' to radians before using trigonometric functions
        double radians = a * M_PI / 180.0; // Convert degrees to radians
        cout << "The value of cos(a) is: " << cos(radians) << endl;
        cout << "The value of sin(a) is: " << sin(radians) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(radians) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    
};

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}
