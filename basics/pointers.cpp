#include <iostream>

int main() {
    // Pointers = Variable that stores a memory address of another variable.
    //            Sometimes it's easier to work with an address.

    // & Address-of operator
    // * dereference operator

    std::string name = "Jose";
    std::string *pName = &name;
    std::string *pName2 = nullptr;      // Null pointer

    std::cout << "Here is a null pointer: " << pName2 << std::endl;
    std::cout << "Pointer " << *pName << ":" << pName << " -> " << name << ":" << &name << std::endl;
}