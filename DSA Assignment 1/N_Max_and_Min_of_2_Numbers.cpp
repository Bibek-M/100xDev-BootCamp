#include <iostream>
using namespace std;
int main()
{
    long long int a;
    long long int b;
    cin >> a;
    cin >> b;
    if (a > b)
    {
        cout << "Min = " << b << endl;
        cout << "Max = " << a;
    }
    else
    {
        cout << "Min = " << a << endl;
        cout << "Max = " << b;
    }
    return 0;
}