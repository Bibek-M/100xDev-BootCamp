#include <iostream>
#include <vector>
#include<numeric>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    long long sum=accumulate(vec.begin(),vec.end(),0LL);
    cout<<sum;
    return 0;
}