
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
}
