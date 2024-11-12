#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double y, Z;
    cout << "Введіть значення y: ";
    cin >> y;
    double dob = 2;
    for (int k = 2; k <= 10; k++) {
        dob *= log(k * y);
    }
    Z = sin(dob);
    cout << "Z = " << Z << endl;

    return 0;
}