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