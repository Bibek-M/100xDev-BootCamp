#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // test
    // int n=6;
    // int x=3;
    // vector<int>vec={1,5,2,3,7,3};
     //dynamic
    int n;
    cin >> n;
    vector<int> vec(n);
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int counter=0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == x)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}