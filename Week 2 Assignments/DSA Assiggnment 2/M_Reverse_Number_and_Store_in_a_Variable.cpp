#include <iostream>
using namespace std;

int main()
{
    long long n, m = 0;

    if (!(cin >> n))
        return 0;
    while (n != 0)
    {
        int rem = n % 10;
        m = m * 10 + rem;
        n /= 10;
    }

    cout << m << endl;
    return 0;
}