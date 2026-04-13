#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            nums.push_back(val);
            ans ^= val;
        }
        for (int i = 0; i <= n - 2; i++)
        {
            ans ^= i;
        }

        cout << ans << endl;
    }
    return 0;
}