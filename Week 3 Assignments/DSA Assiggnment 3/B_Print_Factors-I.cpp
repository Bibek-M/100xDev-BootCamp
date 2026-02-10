#include <iostream>
using namespace std;
void fact(long long int &n)
{
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            cout << i << " ";
        } 
    }
}
int main()
{
    long long int n;
    // cout<<"Enter a num"<<endl;
    cin >> n;
    fact(n);
    return 0;
}