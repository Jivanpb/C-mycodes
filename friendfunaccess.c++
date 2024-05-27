// #include<iostream>
// using namespace std;
// {
//     //forward declaration
//     class complex;
//     class calculator{
//         public:
//         int add(int a,int b){
//             return ( a + b );
//         }
//         int SumRealComplex(complex ,complex );
//      }
// };
// class complex{
//     int a,b;
//     friend class calculator :: SumRealComplex(complex ,complex );
//     public:
//     void SetNumber(int n1,int n2){
//         a = n1;
//         b = n2;
//     }
//     void PrintNumber(){
//         cout<<"your number is "<<a<< " + "<<b<<" i "<<endl;
//     }
// };
//     int calculator :: SumRealComplex(complex o1,complex o2){
//         return (o1.a + o2.a);
//     }
// int main()
// {
//         complex o1,o2;
//         o1.SetNumber(1,4);
//         o2.SetNumber(5,7);
//         calculator calc;
//         int result= calc.SumRealComplexI(o1,o2);
//         cout<<"the sume of real part o1 and o2 is "<<result<<endl;
//         return 0;
// }


#include<iostream>
using namespace std;

// Forward declaration
class complex;

class calculator {
public:
    int add(int a, int b) {
        return (a + b);
    }

    int SumRealComplex(complex o1, complex o2);
};

class complex {
    int a, b;

    // Friend function declaration
    //friend int calculator::SumRealComplex(complex o1, complex o2);
    friend class calculator;

public:
    void SetNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void PrintNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::SumRealComplex(complex o1, complex o2) {
    return (o1.a + o2.a);
}

int main() {
    complex o1, o2;
    o1.SetNumber(1, 4);
    o2.SetNumber(5, 7);

    calculator calc;
    int result = calc.SumRealComplex(o1, o2);

    cout << "The sum of real part of o1 and o2 is " << result << endl;

    return 0;
}
