#include <iostream>
#include <vector>
using namespace std;
int main()
{
        vector<int> nums;
        int size;
        cin >> size;
        int target;
        cin >> target;
        for (int i = 0; i < size; i++)
        {
            int num;
            cin >> num;
            nums.push_back(num);
        }        
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    for (int l = k + 1; l < nums.size(); l++)
                    {
                        if (nums[i] - 2 * nums[j] + 3 * nums[k] - 4 * nums[l] == target)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    return 0;
}