#include <iostream>
using namespace std;

int main()
{
    bool p; cout << "p = "; cin >> p;
    bool q; cout << "q = "; cin >> q;
    bool r; cout << "r = "; cin >> r;
    bool result = !p || (q or r);
    cout << "p -> (q ^ r) = " << result;
}
