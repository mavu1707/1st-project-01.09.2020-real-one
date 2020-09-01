
#include <iostream>
#include <string>

int age;

int main() {
    std::cout << "what is your age?";
    std::cin >> age;
    if (age >= 20) {
        std::cout << "youre an adult";
    }
    else {
        std::cout << "youre a teenager";
    }
    if (age <= 12) {
        std::cout << "youre a kid";
    }
}

