#include <iostream>
#include<string>
using namespace std;
class Bank
{
    private:
    string name;
    int accountNo;
    long balance;
    public:
    void OpenAccount()
    {
        cout<<"Entre your account number"<<endl;
        cin>>accountNo;
        cout<<"Entre your Name: "<<endl;
        cin>>name;
        cout<<"Entre your balance"<<endl;
        cin>>balance;
    }
    void ShowAccount()
    {
        cout<<"Your account number is: "<<accountNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void Deposit()
    {
        long amt;
        cout<<"Entre the amount you want to deposit"<<endl;
        cin>>amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout<<"Entre the amount you want to Withdrawal: "<<endl;
        cin>>amt;
        if (amt<=balance)
        {
            balance  = (balance - amt);
        }else{
            cout<<"Insufficent balance"<<endl;
        }
    }
    int Search(int);
};
int Bank::Search(int a)
{
    if (accountNo == a)
    {
        ShowAccount();
        return(1);
    }
    return (0);
}