#include <iostream>
#include <Windows.h>

int number;

void print(int c, const char* text) {
    std::cout << c << " | " << text << std::endl;
}

void read() {
    std::cout << number << std::endl;
}

void write() {
    std::cout << "Enter an integer: ";
    std::cin >> number;
}

int main() {
    int input;

    SetConsoleTitleA("Memory Editor");

    std::cout << &print << std::endl;

    while (true) {
        std::cout << "1. Read. 2. Write. 3. Clear" << std::endl;
        std::cin >> input;

        switch (input) {
            case 1:
                read();
                break;
            case 2:
                write();
                break;
            case 3:
                system("cls");
                break;
            default:
                std::cout << "Invalid input." << std::endl;
        }
    }
}