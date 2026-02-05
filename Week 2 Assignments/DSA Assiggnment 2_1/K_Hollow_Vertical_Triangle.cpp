#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout << "Enter a num" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(i==1 || i==2 || j==i-1 || j==0){
                cout << "*" << " ";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if(i==n-1 || i==n-2 || j==i || j==n-1){
                cout << "*" << " ";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}