// #include<iostream>
// using namespace std;

// class Bike{
//     public:

//     int regn;
//     string color;

//     Bike(){
//         regn=12345;
//         color="YELLOW";
//     }
//     Bike(int r,string c){
//         regn=r;
//         color=c;
//     }

//     Bike(Bike &c){
//         regn=c.regn;
//         color=c.color;
//     }
//     void display(){
//         cout<<"REGN: "<<regn<<" "<<"COLOR: "<<color<<endl;
//     }
//     ~Bike(){
//         cout<<"DESTRUCTOR"<<endl;
//     }

// };

// int main(){
//     Bike b1;
//     b1.display();

//     Bike b2(56789,"BLUE");
//     b2.display();

//     Bike b3 = b2;
//     b3.display();
    
//     return 0;
// }















// #include<iostream>
// using namespace std;



// void sum(int a,int b){
//     cout<<"SUM: "<<a+b<<endl;
// }
// void sum(float a,float b){
//     cout<<"SUM: "<<a+b<<endl;
// }
// void sum(string a,string b){
//     cout<<"CONCATENATION: "<<a+b<<endl;
// }


// int main(){
//     sum(2,3);
//     sum(2.5f,3.5f);
//     sum("C++","PROGRAM");
// }














// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     static int count;

//     Student()
//     {
//         count++;
//     }
// };

// int Student::count = 0;

// int main()
// {
//     Student s1;
//     Student s2;
//     Student s3;

//     cout << Student::count;

//     return 0;
// }





















// #include <iostream>
// using namespace std;

// class Student {
// public:
//     int age;

//     void display() {
//         cout << "Age: " << age << endl;
//     }
// };

// int main() {
//     Student s;       
//     Student *ptr;     

//     ptr = &s;         

//     ptr->age = 20;  
//     ptr->display();  

//     return 0;
// }

















// #include <iostream>
// using namespace std;

// class Bank {
// public:
//     string name;
//     double balance;

//     void deposit(double amount) {
//         balance += amount;
//         cout << "Deposited: " << amount << endl;
//     }

//     void withdraw(double amount) {
//         if (amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawn: " << amount << endl;
//         } else {
//             cout << "Insufficient balance!" << endl;
//         }
//     }

//     void display() {
//         cout << "Account Holder: " << name << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     Bank account;

//     // Pointer to the Bank object
//     Bank *ptr = &account;

//     // Access object members using pointer
//     ptr->name = "Rahul";
//     ptr->balance = 5000;

//     ptr->display();

//     ptr->deposit(2000);
//     ptr->withdraw(1500);

//     ptr->display();

//     return 0;
// }
















// #include <iostream>
// using namespace std;

// class Bank {
// private:
//     int balance;

// public:
//     Bank() {
//         balance = 5000;
//     }

//     // Friend function
//     friend void showBalance(Bank b);
// };

// // Friend function definition
// void showBalance(Bank b) {
//     cout << "Bank Balance: " << b.balance << endl;
// }

// int main() {
//     Bank account;

//     showBalance(account);

//     return 0;
// }

























#include <iostream>
using namespace std;

class Bank {
private:
    int balance = 5000;

    // Friend class
    friend class Manager;
};

class Manager {
public:
    void showBalance(Bank b) {
        cout << "Bank Balance: " << b.balance << endl;
    }
};

int main() {
    Bank account;
    Manager m;

    m.showBalance(account);

    return 0;
}
