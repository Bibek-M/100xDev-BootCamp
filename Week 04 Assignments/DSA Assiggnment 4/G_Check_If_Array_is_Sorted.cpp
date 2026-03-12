#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // test
    // int n=6;
    // int x=3;
    // vector<int>vec={3,4,1};
    // dynamic
    int n;
    cin >> n;
    vector<int> vec(n);
    // int x;
    // cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    //ans

    for (int i = 1; i < n; i++)
    {
        if (vec[i] < vec[i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}