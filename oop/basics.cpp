#include <iostream>
using namespace std;

class Human {
    public:
        string name;
        string occupation;
        int age;

        Human (string Name, string Occupation, int Age) {
            name = Name;
            occupation = Occupation;
            age = Age;   
        }

        void eat () {
            cout << name << " is eating" << endl;
        };
        void drink () {
            cout << name << " is drinking" << endl;
        }
};

int main () {
    // Object = A collection of attributes and methods.
    //          Created from a class which acts as "blue-print"
    
    Human human1("Jose", "Dev", 23);

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();

    return 0;
}