/* C++ PROGRAM  TO CREATE CLASS OF BANKACCOUNT  CONTAINING DETAILS  ACOUNT NO:,DEPOSITEDAMT,WITHRAWED AMT*/

#include <iostream>

using namespace std;

class  bankaccount
{
private:
    int accno,depositedamt,currentamt,TotalBalance,Withdrawedamt,Accountbalance;
    string name,savacc;
public:
    void input()
{

  cout<<"AccountNumber"<<endl;
  cin>>accno;
  cout<<"Account Type"<<endl;
  cin>>savacc;
  cout<<"Curr Amt in Account"<<endl;
  cin>>currentamt;
}
   void deposit()
   {
     cout<<"Amt to be deposited"<<endl;
     cin>>depositedamt;
   }
   void BALANCE()
   {
       TotalBalance=depositedamt+currentamt;
       cout<<"totalbalance"<<TotalBalance<<endl;
       
   }
   void withdrawal()

 {
     cout<<"Withdrawal Amt"<<endl;
     cin>>Withdrawedamt;

 }
 void output()
 {
     cout<<"Name of Depositer"<<endl;
     cin>>name;
     Accountbalance =(TotalBalance-Withdrawedamt);
     cout<<"Account Balance"<<" "<<Accountbalance<<endl;
 }
};

int main()
{
    bankaccount b;
    b.input();
    b.deposit();
    b.BALANCE();
    b.withdrawal();
    b.output();

    return 0;
}
/*OUTPUT
AccountNumber
23456778
Account Type
savacc
Curr Amt in Account
5000
Amt to be deposited
2000
totalbalance
7000
Withdrawal Amt
500
Name of Depositer
HANA
Account Balance 6500
*/


