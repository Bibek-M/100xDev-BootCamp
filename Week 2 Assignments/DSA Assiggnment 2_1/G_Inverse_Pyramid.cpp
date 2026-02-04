#include <iostream>
using namespace std;
int main()
{
    int n;
    // int m;
    // cout<<"Enter num"<<endl;
    cin >> n;
    // cout<<"Enter Stars"<<endl;
    // cin >> m;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}