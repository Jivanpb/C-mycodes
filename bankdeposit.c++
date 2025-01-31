#include<iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit()
    {
    }
    BankDeposit(int p, int y, float r); // r can be value like 0.03
    BankDeposit(int p, int y, float R); // R can be value like 14
    void show();
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = p;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}
BankDeposit ::BankDeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R)/100;
    returnValue = p;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
    void BankDeposit :: show()
    {
        cout << "principal amout was " << principal
             << " ,return value after " << years
             << " years  is " << returnValue << endl;
    }
    int main()
    {
        BankDeposit bd1, bd2, bd3;
        int p, y,R;
        float r;
        cout << "enter the value of p,y and r:" << endl;
        cin >> p >> y >> r;
        bd1 = BankDeposit(p, y, r);
        bd1.show();
        cout << "enter the value of p,y and R:" << endl;
        cin >> p >> y >> R;
        bd2 = BankDeposit(p, y, R);
        bd2.show();
        bd3.show();
        return 0;
    }
