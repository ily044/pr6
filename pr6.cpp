#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << showpos << '\t' << 4 << noshowpos << endl;
    cout << setw(15) << internal << fixed << setprecision(2) << -67.09124 << endl;
    cout << showpos << '\t' << 235 << noshowpos << endl;
    cout << dec << 8 << hex << 10 << dec << 1 << endl;
    cout << fixed << setprecision(2) << -121.0 << endl;
    cout << showpos << 1 << noshowpos;
    cout << showpos << 24 << noshowpos << endl;

    cout << setw(1) << left << "String1" << endl << setw(15) << internal << "String2" << endl << setw(23) << right << "String3" << endl;
    cout << setw(15) << internal << "String1" << endl << setw(1) << left << "String2" << endl;
    cout << 3;
    cout << '*';
    cout << setw(17) << internal << "String \n1" << endl;
}
