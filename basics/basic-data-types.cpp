#include <iostream>

int main() {
    //Integer
    int number = 5; 
    int truncated = 6.4;

    //Double (includes decimal)
    double price = 10.99;
    double gpa = 2.5;

    //Single character
    char grade = 'A';
    char initial = 'B';

    //Boolean
    bool isTrue = true;
    bool isFalse = false;

    //Strings
    std::string name = "Bro";
    std::string day = "Friday";

    //Constants
    const double PI = 3.14159;
    const std::string NAME = "José";

    std::cout << number << "\n";
    std::cout << truncated << "\n";
    std::cout << price << "\n";
    std::cout << "Hello " << NAME << "\n";

    return 0;
}