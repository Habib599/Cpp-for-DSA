#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string n, int r, char s, int marks, int c) {
        name = n;
        roll = r;
        section = s;
        math_marks = marks;
        cls = c;
    }
};

int main() {
    // Create three static Student objects
    Student s1("Alice", 1, 'A', 85, 10);
    Student s2("Bob", 2, 'B', 90, 10);
    Student s3("Charlie", 3, 'A', 88, 10);

    // Compare the math_marks of the three students
    Student highest = s1; // Assume s1 has the highest initially
    if (s2.math_marks > highest.math_marks) {
        highest = s2;
    }
    if (s3.math_marks > highest.math_marks) {
        highest = s3;
    }

    cout << "Name: " << highest.name << endl;
    cout << "Math Marks: " << highest.math_marks << endl;

    return 0;
}
