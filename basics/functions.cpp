#include <iostream>

// Functions should return their defined type.
// If void then don't return anything.

void happyBirthday();                                   // Overloaded functions can share same name but different params
void happyBirthday(std::string name);                   // Function decoration

int main() {
    std::string name = "Jose";
    happyBirthday();
    happyBirthday(name);
    return 0;
}


void happyBirthday() {
    std::cout << "Happy Birthday to you" << '\n';
}

void happyBirthday(std::string name) {
    std::cout << "Happy Birthday to " << name << '\n';
}