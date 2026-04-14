#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> nums;
        int size;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            int num;
            cin >> num;
            nums.push_back(num);
        }
        int target;
        cin >> target;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == target)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}