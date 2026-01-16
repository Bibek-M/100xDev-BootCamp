#include <iostream>
using namespace std;
int main()
{
    long long int a;
    long long int b;
    cin >> a;
    cin >> b;
    int la = a % 10;
    int lb = b % 10;
    cout << la + lb;
    return 0;
}