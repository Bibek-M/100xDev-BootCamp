#include <iostream>
using namespace std;
int main()
{
    long long int a;
    long long int b;
    cin >> a;
    cin >> b;

    cout << a << " + " << b << " = " << a + b << endl
         << endl;
    cout << a << " - " << b << " = " << a - b << endl
         << endl;
    cout << a << " * " << b << " = " << a * b << endl
         << endl;
    cout << a << " / " << b << " = " << a / b << endl
         << endl;
    cout << a << " % " << b << " = " << a % b << endl;

    return 0;
}