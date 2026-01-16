#include <iostream>
using namespace std;
int main()
{
    long long int a;
    long long int b;
    cin >> a;
    cin >> b;
    if (a % b == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}