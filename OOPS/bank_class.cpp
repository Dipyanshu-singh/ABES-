#include <iostream>
using namespace std;
class bank_user
{
private:
    double balance = 0;

public:
    string name;

    double acc_no;
    string IFSC;
    double DOF;

    void Balance()
    {
        cout << "Remaining Balance: " << balance << endl;
    }

    void Deposit()
    {
        cout << "How much: ";
        int amount;
        cout << "enter amount: ";
        cin >> amount;
        balance += amount;
        Balance();
    }

    void Withdraw()
    {
        cout << "How much: ";
        int amount;
        cout << "enter amount: ";
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Not sufficient balance : Gareeb :) " << endl;
        }
        Balance();
    }
};
int main()
{
    bank_user U1;
    cout << "enter yo name: ";
    getline(cin, U1.name);
    cout << "enter account number";
    cin >> U1.acc_no;
    cout << "enter IFSC";
    cin >> U1.IFSC;
    cout << "enter today's date: (mmddyyyy)";
    cin >> U1.DOF;
    cout << "what yu want? (Balance/Deposit/Withdraw)";
    char s;
    cin >> s;
    if (s == 'b' || s == 'B')
    {
        U1.Balance();
    }
    else if (s == 'd' || s == 'D')
    {
        U1.Deposit();
    }
    else if (s == 'w' || s == 'W')
    {
        U1.Withdraw();
    }
    else
    {
        cout << "invalid choice";
    }
}