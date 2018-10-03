#include <iostream>

using namespace std;
class Account
{private :
double balance;

public :
 Account (double initialbalance )
  {
   balance = initialbalance;

}
void credit(double amount)
{
    balance = balance+amount;
}
void debit(double amount)
{
    if(amount>balance)

        {cout<<"Not available";}
  else
    balance = balance-amount;
  }
double getbalance()
{
   return balance;
}


};
int main( int argc , char const *argv [ ])
{   Account ZA(200);
    ZA.credit(300);
    int amount;
  cout<<"amount"<< ZA.getbalance();
    Account acct1(45);
    cout<<"amount 1 balance is "<<acct1.getbalance();
  acct1.credit(2323);
 cout<<"amount 1 balance is "<<acct1.getbalance();
 acct1.debit(1500);
 cout<<" balance is"<<acct1.getbalance();
    return 0;
}
