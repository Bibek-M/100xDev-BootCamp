#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int size;
        cin >> size;
        vector<int> nums;
        // 1. Fill the entire vector first
        for (int i = 0; i < size; i++)
        {
            int val;
            cin >> val;
            nums.push_back(val);
        }

        // 2. Perform the alternate swaps
        for (int i = 0; i + 1 < nums.size(); i += 2)
        {
            swap(nums[i], nums[i + 1]);
        }

        // 3. Print the final result once
        for (auto x : nums)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
