//Reverse a number
#include <iostream>
using namespace std;

int main()
{
    long long int n;
    if (!(cin >> n))
        return 0;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    if (n < 0)
    {
        cout << "-";
        n = -n;
    }
    while (n > 0)
    {
        cout << n % 10;
        n /= 10;
    }

    return 0;
}