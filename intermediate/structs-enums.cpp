#include <iostream>

enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

struct student {
    std::string name;
    double gpa;
    bool enrolled = true;
};

void printStudent(student student);

int main() {
    student student1;

    student1.name = "Spongebob";
    student1.gpa = 3.2;

    printStudent(student1);         // When we pass a struct is passed by value only (use & memory operator)

    return 0;
}

void printStudent(student student) {
    std::cout << student.name << "\n";
    std::cout << student.gpa << "\n";
    std::cout << student.enrolled << "\n";
}