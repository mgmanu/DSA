#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string holderName;
    float balance;

public:


    BankAccount()
    {
        accountNumber = 0;
        holderName = "";
        balance = 0.0;
    }
 
    void setData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> holderName;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount)
    {
        balance = balance + amount;

        cout << "Amount deposited successfully." << endl;
    }

    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance = balance - amount;

            cout << "Amount withdrawn successfully." << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << holderName << endl;
        cout << "Current Balance: " << balance << endl;
    }

    ~BankAccount()
    {
        cout << "Account object destroyed." << endl;
    }
};

int main()
{
    int n;
    float depositAmount;
    float withdrawAmount;

    cout << "Enter number of customers: ";
    cin >> n;

    BankAccount *accounts = new BankAccount[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Customer " << i + 1 << endl;

        accounts[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nCustomer " << i + 1 << endl;

        cout << "Enter deposit amount: ";
        cin >> depositAmount;

        accounts[i].deposit(depositAmount);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nCustomer " << i + 1 << endl;

        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;

        accounts[i].withdraw(withdrawAmount);
    }

    cout << "\n========== ACCOUNT SUMMARY ==========" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nCustomer " << i + 1 << endl;

        accounts[i].display();
    }
    delete[] accounts;

    return 0;
}