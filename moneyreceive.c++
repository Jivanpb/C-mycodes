#include<iostream>
using namespace std;
int moneyReceived(int currentMoney,float factor=1.04)
{
      return currentMoney * factor;
}
int main()
{
    int money=100000;
    cout<<"if you have money RS in your bank account "<<money<<endl;
    cout<<"you will receive " <<moneyReceived(money)<<endl;
    cout<<"RS one year later "<<endl;
         cout<<"if you are a vip have money RS in your bank account "<<money<<endl;
              cout<<"you will receive " <<moneyReceived(money,1.10)<<endl;
                   cout<<"RS one year later "<<endl;
                        cout<<"if you belonging political background have money RS in your bank account "<<money<<endl;
                              cout<<"you will receive " <<moneyReceived(money,1.20)<<endl;
                                cout<<"RS one year later ";
    return 0;

}