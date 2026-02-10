#include <iostream>
using namespace std;
void isPrime(long long int &n)
{
    if (n==1){
        cout<<"Not Prime";
        return;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";return;
        }
    }
    cout<<"Prime";return;
}
int main()
{
    long long int n;
    // cout<<"Enter a num"<<endl;
    cin >> n;
    isPrime(n);
    return 0;
}