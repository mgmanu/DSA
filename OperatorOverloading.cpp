#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1 + c2;

    cout << c3.real << " + " << c3.imag << "i";
}







// #include <iostream>
// using namespace std;

// class Complex {
// public:
//     int real;
//     int imag;

//     Complex(int r, int i) {
//         real = r;
//         imag = i;
//     }

//     Complex operator+(Complex c) {
//         Complex temp(0, 0);

//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;

//         return temp;
//     }
// };

// int main() {
//     Complex c1(2, 3);
//     Complex c2(4, 5);

//     Complex c3 = c1 + c2;

//     cout << "Sum = " << c3.real << " + " << c3.imag << "i";

//     return 0;
// }
















#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double balance = 0.0) {
        this->balance = balance;
    }

    BankAccount operator+(const BankAccount &other) const {
        return BankAccount(this->balance + other.balance);
    }

    bool operator==(const BankAccount &other) const {
        return this->balance == other.balance;
    }

    void displayBalance() const {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    double b1, b2;

    cin >> b1 >> b2;

    BankAccount account1(b1);
    BankAccount account2(b2);

    BankAccount account3 = account1 + account2;

    cout << "Combined ";
    account3.displayBalance();

    if (account1 == account2) {
        cout << "Both accounts have equal balances." << endl;
    } else {
        cout << "Both accounts have different balances." << endl;
    }

    return 0;
}
