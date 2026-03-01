#include <iostream>
using namespace std;
bool isPrime(long long int &n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long int n;
    // cout<<"Enter a num"<<endl;
    cin >> n;
    for(long long int i=1;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}