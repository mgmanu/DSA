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














#include <iostream>
using namespace std;

class Student
{
public:
    static int count;

    Student()
    {
        count++;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    cout << Student::count;

    return 0;
}


