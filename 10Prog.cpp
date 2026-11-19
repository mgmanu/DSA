#include <iostream>
#include <string>
using namespace std;
class Ticket
{
protected:
    string movieName;
    float ticketPrice;
    int numberOfTickets;
public:
    virtual void getDetails()
    {
        cout << "Enter movie name: ";
        cin >> movieName;
        cout << "Enter ticket price: ";
        cin >> ticketPrice;
        cout << "Enter number of tickets: ";
        cin >> numberOfTickets;
    }
    virtual void displayBookingDetails()
    {
        cout << "Movie Name: " << movieName << endl;
        cout << "Ticket Price: Rs. " << ticketPrice << endl;
        cout << "Number of Tickets: " << numberOfTickets << endl;
    }
};
class RegularShow : public Ticket{
public:
    void getDetails(){
        Ticket::getDetails();
    }
    void displayBookingDetails(){
        cout << "\nRegular Show Booking Details" << endl;
        Ticket::displayBookingDetails();
        cout << "Total Cost: Rs. "
             << ticketPrice * numberOfTickets << endl;
    }
};
class PremiumShow : public Ticket{
public:
    void getDetails(){
        Ticket::getDetails();
    }
    void displayBookingDetails(){
        cout << "\nPremium Show Booking Details" << endl;
        Ticket::displayBookingDetails();
        cout << "Total Cost: Rs. "
             << ticketPrice * numberOfTickets << endl;
    }
};
class ThreeDShow : public Ticket{
public:
    void getDetails(){
        Ticket::getDetails();
    }
    void displayBookingDetails(){
        cout << "\n3D Show Booking Details" << endl;
        Ticket::displayBookingDetails();
        cout << "Total Cost: Rs. "
             << ticketPrice * numberOfTickets << endl;
    }
};
int main()
{
    Ticket *t[3];
    RegularShow r;
    PremiumShow p;
    ThreeDShow d;
    t[0] = &r;
    t[1] = &p;
    t[2] = &d;
    cout << "Enter Regular Show Details" << endl;
    t[0]->getDetails();
    cout << "\nEnter Premium Show Details" << endl;
    t[1]->getDetails();
    cout << "\nEnter 3D Show Details" << endl;
    t[2]->getDetails();
    cout << "\n----- Ticket Booking Summary -----" << endl;
    for (int i = 0; i < 3; i++)
    {
        t[i]->displayBookingDetails();
    }
    return 0;
}
