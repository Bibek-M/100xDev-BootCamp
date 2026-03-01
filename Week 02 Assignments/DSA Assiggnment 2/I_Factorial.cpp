#include <iostream>
using namespace std;
int main()
{
    int n;
    long long int fac= 1;
    // cout << "enter a number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    cout << fac;
}