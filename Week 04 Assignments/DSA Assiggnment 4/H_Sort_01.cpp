#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> all_vectors(n);
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int val;
            cin >> val;
            all_vectors[i].push_back(val);
        }
        sort(all_vectors[i].begin(), all_vectors[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int x : all_vectors[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}