#include <iostream>

int main() {
    // Dynamic memory = Memory that is allocated after the program is
    //                  already compiled and running.
    //                  Use the 'new' operator to allocate memory in
    //                  the heap rather than the stack.

    //                  Useful when we don't know how much memory we
    //                  will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    int *pNum = NULL;
    pNum = new int;

    *pNum = 21;
     
    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum;

    return 0;
}