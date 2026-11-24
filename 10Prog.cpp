// #include <iostream>
// #include <string>
// using namespace std;
// class BankAccount{
//     int accountNo;
//     string name;
//     float balance;
// public:
//     // Parameterized constructor
//     BankAccount(int accNo, string n, float b){
//         accountNo = accNo;
//         name = n;
//         balance = b;
//     }
//     // Deposit function
//     void deposit(float amount){
//         balance = balance + amount;
//         cout << "Amount deposited successfully." << endl;
//     }
//     // Withdrawal function
//     void withdraw(float amount){
//         if (amount <= balance){
//             balance = balance - amount;
//             cout << "Amount withdrawn successfully." << endl;
//         }
//         else{
//             cout << "Insufficient balance." << endl;
//         }
//     }
//     // Display function
//     void displayBalance(){
//         cout << "\nAccount Number: " << accountNo << endl;
//         cout << "Account Holder: " << name << endl;
//         cout << "Balance: " << balance << endl;
//     }
//     // Destructor
//     ~BankAccount()
//     {
//         cout << "Account object destroyed." << endl;
//     }
// };
// int main()
// {
//     int accountNo;
//     string name;
//     float balance;
//     float amount;
//     // Reading details for Account 1
//     cout << "Enter Account 1 Number: ";
//     cin >> accountNo;
//     cout << "Enter Account 1 Holder Name: ";
//     cin >> name;
//     cout << "Enter Account 1 Initial Balance: ";
//     cin >> balance;
//     BankAccount acc1(accountNo, name, balance);
//     cout << "\nEnter amount to deposit: ";
//     cin >> amount;
//     acc1.deposit(amount);
//     cout << "Enter amount to withdraw: ";
//     cin >> amount;
//     acc1.withdraw(amount);
//     acc1.displayBalance();
//     // Reading details for Account 2
//     cout << "\nEnter Account 2 Number: ";
//     cin >> accountNo;
//     cout << "Enter Account 2 Holder Name: ";
//     cin >> name;
//     cout << "Enter Account 2 Initial Balance: ";
//     cin >> balance;
//     BankAccount acc2(accountNo, name, balance);
//     cout << "\nEnter amount to deposit: ";
//     cin >> amount;
//     acc2.deposit(amount);
//     cout << "Enter amount to withdraw: ";
//     cin >> amount;
//     acc2.withdraw(amount);
//     acc2.displayBalance();
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;
// class Ticket{
//     int ticketNumber;
//     string movieName;
//     int totalSeats;
//     int bookedSeats;
// public:
//     Ticket(int tNo, string name, int total){
//         ticketNumber = tNo;
//         movieName = name;
//         totalSeats = total;
//         bookedSeats = 0;
//     }
//     // Overload 1: book a single seat by seat number
//     void bookSeats(int seatNumber){
//         bookedSeats += 1;
//         cout << "Single seat booked successfully." << endl;
//     }
//     // Overload 2: book multiple seats
//     void bookSeats(int numberOfSeats, bool multiple){
//         if (numberOfSeats <= totalSeats - bookedSeats){
//             bookedSeats += numberOfSeats;
//             cout << "Multiple seats booked successfully." << endl;
//         }
//         else{
//             cout << "Not enough seats available." << endl;
//         }
//     }
//     // Overload 3: book seats for a specific seat category
//     void bookSeats(int numberOfSeats, string category)
//     {
//         if (numberOfSeats <= totalSeats - bookedSeats){
//             bookedSeats += numberOfSeats;
//             cout << numberOfSeats << " " << category << " seats booked successfully." << endl;
//         }
//         else{
//             cout << "Not enough seats available." << endl;
//         }
//     }
//     void displayBookingSummary(){
//         cout << "\nBooking Summary:" << endl;
//         cout << "Ticket Number: " << ticketNumber << endl;
//         cout << "Movie Name: " << movieName << endl;
//         cout << "Total Seats: " << totalSeats << endl;
//         cout << "Booked Seats: " << bookedSeats << endl;
//         cout << "Available Seats: " << totalSeats - bookedSeats << endl;
//     }
//     ~Ticket(){
//         cout << "Ticket object destroyed." << endl;
//     }
// };
// int main(){
//     int ticketNumber, totalSeats;
//     string movieName;
//     int seatNumber, numberOfSeats, categorySeats;
//     string category;
//     cout << "Enter Ticket Number: ";
//     cin >> ticketNumber;
//     cout << "Enter Movie Name: ";
//     cin >> movieName;
//     cout << "Enter Total Seats: ";
//     cin >> totalSeats;
//     Ticket t(ticketNumber, movieName, totalSeats);
//     cout << "Enter Seat Number for single booking: ";
//     cin >> seatNumber;
//     t.bookSeats(seatNumber);
//     cout << "Enter Number of Seats for multiple booking: ";
//     cin >> numberOfSeats;
//     t.bookSeats(numberOfSeats, true);
//     cout << "Enter Seat Category: ";
//     cin >> category;
//     cout << "Enter Number of Seats for category booking: ";
//     cin >> categorySeats;
//     t.bookSeats(categorySeats, category);
//     t.displayBookingSummary();
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;
// class Employee
// {
// private:
//     int employeeId;
//     string employeeName;
//     float salary;
//     float bonus;
//     float overtimePay;
//     float netSalary;
// public:
//     Employee();
//     void setData(int id, string name, float sal);
//     void calculateOvertimePay(int hours, float rate);
//     void isEligibleForBonus();
//     void calculateNetSalary();
//     void display();
//     ~Employee();
// };
// // Default Constructor
// Employee::Employee(){
//     employeeId = 0;
//     employeeName = "";
//     salary = 0;
//     bonus = 0;
//     overtimePay = 0;
//     netSalary = 0;
// }
// // Set employee details
// void Employee::setData(int id, string name, float sal){
//     employeeId = id;
//     employeeName = name;
//     salary = sal;
// }
// // Calculate overtime pay
// void Employee::calculateOvertimePay(int hours, float rate){
//     overtimePay = hours * rate;
// }
// // Check bonus eligibility
// void Employee::isEligibleForBonus(){
//     if (salary >= 50000){
//         bonus = salary * 0.10;
//         cout << "Eligible for bonus." << endl;
//     }
//     else{
//         bonus = 0;
//         cout << "Not eligible for bonus." << endl;
//     }
// }
// // Calculate net salary
// void Employee::calculateNetSalary(){
//     netSalary = salary + bonus + overtimePay;
// }
// // Display employee details
// void Employee::display(){
//     cout << "Employee ID: " << employeeId << endl;
//     cout << "Employee Name: " << employeeName << endl;
//     cout << "Basic Salary: " << salary << endl;
//     cout << "Bonus: " << bonus << endl;
//     cout << "Overtime Pay: " << overtimePay << endl;
//     cout << "Net Salary: " << netSalary << endl;
// }
// // Destructor
// Employee::~Employee(){
//     cout << "Employee object destroyed." << endl;
// }
// int main(){
//     int n;
//     int id;
//     string name;
//     float salary;
//     int overtimeHours;
//     float overtimeRate;
//     cout << "Enter number of employees: ";
//     cin >> n;
//     Employee employees[10];
//     // Input employee details
//     for (int i = 0; i < n; i++){
//         cout << "Enter employee " << i + 1 << " ID: ";
//         cin >> id;
//         cout << "Enter employee " << i + 1 << " name: ";
//         cin >> name;
//         cout << "Enter employee " << i + 1 << " salary: ";
//         cin >> salary;
//         employees[i].setData(id, name, salary);
//     }
//     // Salary processing
//     for (int i = 0; i < n; i++){
//         cout << "Enter overtime hours for employee " << i + 1 << ": ";
//         cin >> overtimeHours;
//         cout << "Enter overtime rate for employee " << i + 1 << ": ";
//         cin >> overtimeRate;
//         employees[i].calculateOvertimePay(overtimeHours, overtimeRate);
//         employees[i].isEligibleForBonus();
//         employees[i].calculateNetSalary();
//     }
//     // Display employee details
//     cout << "\nEmployee Details:" << endl;
//     for (int i = 0; i < n; i++){
//         employees[i].display();
//     }
//     return 0;
// }





#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount(double b);

    // Display balance
    void displayBalance();

    // Operator overloading
    BankAccount operator+(const BankAccount& account);
    bool operator==(const BankAccount& account) const;
};

BankAccount::BankAccount(double b) {
    balance = b;
}

void BankAccount::displayBalance() {
    cout << "Balance: " << balance << endl;
}

BankAccount BankAccount::operator+(const BankAccount& account) {
    return BankAccount(balance + account.balance);
}

bool BankAccount::operator==(const BankAccount& account) const {
    return balance == account.balance;
}

int main() {
    double balance1, balance2;

    cout << "Enter balance for Account 1: ";
    cin >> balance1;

    cout << "Enter balance for Account 2: ";
    cin >> balance2;

    BankAccount account1(balance1);
    BankAccount account2(balance2);

    // Add balances
    BankAccount account3 = account1 + account2;

    cout << "\nCombined Account Balance:" << endl;
    account3.displayBalance();

    // Compare balances
    if (account1 == account2) {
        cout << "Both accounts have identical balances." << endl;
    }
    else {
        cout << "The accounts have different balances." << endl;
    }

    return 0;
}
