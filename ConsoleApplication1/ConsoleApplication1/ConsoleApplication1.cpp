#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string clientName;
    string accountNumber;
    double balance;

public:
    BankAccount(const string name, string accNumber, double initialBalance)
    {
        clientName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void printAccount()
    {
        cout << "NAME: " << clientName << endl;
        cout << "ACCOUNT NUMBER: " << accountNumber << endl;
        cout << "AMOUNT: " << balance << " leva" << endl;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << " leva successfully." << endl;
        }
        else {
            cout << "INVALID!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawed " << amount << " leva successfully." << endl;
        }
        else {
            cout << "INVALID!" << endl;
        }
    }
};

int main()
{
    BankAccount account("MARTIN NENKOW", "BG127310514768129", 420);

    cout << "INFORMATION" << endl;
    account.printAccount();

    account.deposit(500.0);
    cout << "AFTER SUCCESSFUL DEPOSIT:" << endl;
    account.printAccount();

    account.withdraw(200.0);
    cout << "AFTER SUCCESSFUL WITHDRAW:" << endl;
    account.printAccount();
}