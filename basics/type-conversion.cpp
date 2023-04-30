#include<iostream>

// type conversion = Conversion a value of one data type to another.
//                          implicit = automatic
//                          explicit == preced value with new data type

int main() {
    char x = 100;               // Implicit conversion from 100 to 'd' ASCII
    char y = (char) 100;        // Explicit conversion from 100 to 'd' ASCII
    
    int correct = 8;
    int questions = 10;

    double score1 = correct/questions * 100;
    double score2 = correct/(double)questions * 100;

    std::cout << score1 << "\n"; // <--- Implicit
    std::cout << score2 << "\n"; // <--- Explicit
    
    return 0;
}