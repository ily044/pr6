#include <iostream>
#include "Windows.h"
int main()
{
    std::cout << "Hello, my name is Illya Bazarniy!\n";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Привіт, мене звати Ілля Базарний!\n";
    std::cout << 16.0 / 4.0;
}
