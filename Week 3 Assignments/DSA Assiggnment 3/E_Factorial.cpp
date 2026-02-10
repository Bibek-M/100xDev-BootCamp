#include <iostream>
using namespace std;
void facto(long long int &n)
{
    long long int fact =1;
    for (int i =1; i <= n; i++)
    {
       fact*=i;
    }
    cout<<fact;
}
int main()
{
    long long int n;
    // cout<<"Enter a num"<<endl;
    cin >> n;
    facto(n);
    return 0;
}