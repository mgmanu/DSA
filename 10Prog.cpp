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




#include <iostream>
#include <string>
using namespace std;
class Ticket{
    int ticketNumber;
    string movieName;
    int totalSeats;
    int bookedSeats;
public:
    Ticket(int tNo, string name, int total){
        ticketNumber = tNo;
        movieName = name;
        totalSeats = total;
        bookedSeats = 0;
    }
    // Overload 1: book a single seat by seat number
    void bookSeats(int seatNumber){
        bookedSeats += 1;
        cout << "Single seat booked successfully." << endl;
    }
    // Overload 2: book multiple seats
    void bookSeats(int numberOfSeats, bool multiple){
        if (numberOfSeats <= totalSeats - bookedSeats){
            bookedSeats += numberOfSeats;
            cout << "Multiple seats booked successfully." << endl;
        }
        else{
            cout << "Not enough seats available." << endl;
        }
    }
    // Overload 3: book seats for a specific seat category
    void bookSeats(int numberOfSeats, string category)
    {
        if (numberOfSeats <= totalSeats - bookedSeats){
            bookedSeats += numberOfSeats;
            cout << numberOfSeats << " " << category << " seats booked successfully." << endl;
        }
        else{
            cout << "Not enough seats available." << endl;
        }
    }
    void displayBookingSummary(){
        cout << "\nBooking Summary:" << endl;
        cout << "Ticket Number: " << ticketNumber << endl;
        cout << "Movie Name: " << movieName << endl;
        cout << "Total Seats: " << totalSeats << endl;
        cout << "Booked Seats: " << bookedSeats << endl;
        cout << "Available Seats: " << totalSeats - bookedSeats << endl;
    }
    ~Ticket(){
        cout << "Ticket object destroyed." << endl;
    }
};
int main(){
    int ticketNumber, totalSeats;
    string movieName;
    int seatNumber, numberOfSeats, categorySeats;
    string category;
    cout << "Enter Ticket Number: ";
    cin >> ticketNumber;
    cout << "Enter Movie Name: ";
    cin >> movieName;
    cout << "Enter Total Seats: ";
    cin >> totalSeats;
    Ticket t(ticketNumber, movieName, totalSeats);
    cout << "Enter Seat Number for single booking: ";
    cin >> seatNumber;
    t.bookSeats(seatNumber);
    cout << "Enter Number of Seats for multiple booking: ";
    cin >> numberOfSeats;
    t.bookSeats(numberOfSeats, true);
    cout << "Enter Seat Category: ";
    cin >> category;
    cout << "Enter Number of Seats for category booking: ";
    cin >> categorySeats;
    t.bookSeats(categorySeats, category);
    t.displayBookingSummary();
    return 0;
}