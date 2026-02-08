#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout<<"Enter nums"<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i ; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <n-i; j++)
        {
            if (i == 0 || j == n-i-1 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            if (j != n-i-1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}