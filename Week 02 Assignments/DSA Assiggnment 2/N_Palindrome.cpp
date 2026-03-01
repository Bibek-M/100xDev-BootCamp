#include <iostream>
using namespace std;

int main()
{
    long long n, m = 0;
    // cout<<"Enter a num"<<endl;
    if (!(cin >> n))
        return 0;
    long long int k=n;
    if (n == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    while (n != 0)
    {
        long long int rem = n % 10;
        m = m * 10 + rem;
        n /= 10;
    }
    if(m==k){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}