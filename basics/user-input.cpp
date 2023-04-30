#include <iostream>

// cout << (Insertion operator)
// cin >> (Extraction operator)

int main() {
    std::string name;

    std::cout << "What's your name?: ";
    std::cin >> name;
    
    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); //With spaces

    std::cout << "hello " << name;
}