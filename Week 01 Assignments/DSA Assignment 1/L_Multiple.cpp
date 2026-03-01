#include <iostream>
using namespace std;
int main()
{
    long long int a;
    long long int b;
    cin >> a;
    cin >> b;
    if (b % a == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}