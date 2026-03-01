#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    int ans=1;
    // cout << "enter a number" << endl;
    cin >> n;
    // cout<<"Enter power"<<endl;
    cin>>m;
    for (int i = 1; i <= m; i++)
    {
        ans *= n;
    }
    cout << ans;
}