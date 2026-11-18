#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int maxReach = 0;

    for (int i = 0; i < n; i++)
    {
        if (i > maxReach)
        {
            cout << "false";
            return 0;
        }

        maxReach = max(maxReach, i + nums[i]);

        if (maxReach >= n - 1)
        {
            cout << "true";
            return 0;
        }
    }

    cout << "true";

    return 0;
}