#include <iostream>
using namespace std;
long long int facto(long long int &n)
{
    long long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    long long int n;
    long long int r;    
    // cout<<"Enter n"<<endl;
    cin >> n;
    // cout<<"Enter r"<<endl;
    cin >> r;
    long long int t=n-r;
    int ans = facto(n)/(facto(r)*facto(t));
    cout<<ans;    
    return 0;
}