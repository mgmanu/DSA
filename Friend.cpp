#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student() {
        marks = 95;
    }

    friend class Teacher;
};

class Teacher {
public:
    void display(Student s) {
        cout << "Marks = " << s.marks << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    t.display(s);

    return 0;
}