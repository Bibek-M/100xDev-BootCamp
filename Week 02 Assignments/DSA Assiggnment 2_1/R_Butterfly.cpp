#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Top part
    for (int i = 0; i < n; i++)
    {
        // left stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // middle spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // right stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom part
    for (int i = n - 2; i >= 0; i--)
    {
        // left stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // middle spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }

        // right stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
