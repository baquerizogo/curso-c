#include <iostream>

// ########################################################
// ################## sizeof() Operator ###################
// ########################################################
//
// It give us the size in memory of a variable or a data type.
// Some data types gives us an explicit size, for example a string 
// will be always 32 bytes.
// 
// SizeOf Operator is useful to know the size of an array.
// We can divide the size of the array to the size of its type
//
// SizeOf Operator doesn't work when we pass an array through a function.
// We should explicit pass a length variable as parameter.
//

int main () {
    // Declaration and initialization
    std::string cars[] = {"Covette", "Mustang", "Camry"};
    cars[0] = "Camaro";

    std::cout << sizeof(cars) / sizeof(std::string) << " elements" << "\n";
    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n\n";

    //##########################################################
    //##########################################################
    //##########################################################
    //##########################################################

    // Declaration
    double prices[4];

    // Initialization
    prices[0] = 5.00;
    prices[1] = 3.30;
    prices[2] = 2.00;
    prices[3] = 5.00;

    for(double price : prices) {
        std::cout << price << "\n";
    }

    return 0;
}