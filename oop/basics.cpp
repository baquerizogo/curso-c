#include <iostream>

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat () {
            std::cout << "This human is eating" << std::endl;
        };
        void drink () {
            std::cout << "This human is drinking" << std::endl;
        }
};

int main () {
    // Object = A collection of attributes and methods.
    //          Created from a class which acts as "blue-print"
    
    Human human1;

    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();

    return 0;
}