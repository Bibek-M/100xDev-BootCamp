#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int ts;
    cin >> ts;

    while (ts--)
    {
        int n, m;
        // 1. Read first array
        cin >> n;
        vector<int> vec1(n);
        for (int i = 0; i < n; i++)
            cin >> vec1[i];

        // 2. Read second array
        cin >> m;
        vector<int> vec2(m);
        for (int i = 0; i < m; i++)
            cin >> vec2[i];

        // 3. Find Intersection
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vec1[i] == vec2[j])
                {
                    cout << vec1[i] << " ";
                    // "Mark" this element in vec2 so it's not used again
                    vec2[j] = INT_MIN;
                    break; // Move to the next element in vec1
                }
            }
        }
        cout << endl;
    }
    return 0;
}
