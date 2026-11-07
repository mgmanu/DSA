#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            cout << left + 1 << " " << right + 1;
            return 0;
        }
        else if (sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    return 0;
}