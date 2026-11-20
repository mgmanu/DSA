#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    int accountNo;
    string name;
    float balance;
public:
    // Parameterized constructor
    BankAccount(int accNo, string n, float b){
        accountNo = accNo;
        name = n;
        balance = b;
    }
    // Deposit function
    void deposit(float amount){
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }
    // Withdrawal function
    void withdraw(float amount){
        if (amount <= balance){
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else{
            cout << "Insufficient balance." << endl;
        }
    }
    // Display function
    void displayBalance(){
        cout << "\nAccount Number: " << accountNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    // Destructor
    ~BankAccount()
    {
        cout << "Account object destroyed." << endl;
    }
};
int main()
{
    int accountNo;
    string name;
    float balance;
    float amount;
    // Reading details for Account 1
    cout << "Enter Account 1 Number: ";
    cin >> accountNo;
    cout << "Enter Account 1 Holder Name: ";
    cin >> name;
    cout << "Enter Account 1 Initial Balance: ";
    cin >> balance;
    BankAccount acc1(accountNo, name, balance);
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    acc1.deposit(amount);
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc1.withdraw(amount);
    acc1.displayBalance();
    // Reading details for Account 2
    cout << "\nEnter Account 2 Number: ";
    cin >> accountNo;
    cout << "Enter Account 2 Holder Name: ";
    cin >> name;
    cout << "Enter Account 2 Initial Balance: ";
    cin >> balance;
    BankAccount acc2(accountNo, name, balance);
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    acc2.deposit(amount);
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc2.withdraw(amount);
    acc2.displayBalance();
    return 0;
}
