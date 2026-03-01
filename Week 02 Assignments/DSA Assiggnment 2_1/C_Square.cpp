#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout<<"Enter a number"<<endl;
    cin >> n;
    // int m;
    // cout<<"Enter stars"<<endl;
    // cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}