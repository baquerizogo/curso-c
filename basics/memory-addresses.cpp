#include <iostream>

int main() {
    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

// ------------------------------------------------ //

    std::string x = "Hola";
    std::string y = "Water";
    
    swap(x, y);

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
}

void swap(std::string &x, std::string &y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}