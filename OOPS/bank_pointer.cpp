#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    string name;
    string accountNumber;
    string ifsc;

    BankAccount(string n, string acc, string i )
    {
        name = n;
        accountNumber = acc;
        ifsc = i;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully."<<endl;
        }
        else
        {
            cout << "Invalid amount."<<endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount."<<endl;
        }
        else if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully."<<endl;
        }
        else
        {
            cout << "Insufficient balance."<<endl;
        }
    }

    void showBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account("Dipyanshu", "123456789", "ifsc3245");

    BankAccount *ptr = &account;

    ptr->deposit(2000);
    ptr->showBalance();

    ptr->withdraw(1500);
    ptr->showBalance();

}