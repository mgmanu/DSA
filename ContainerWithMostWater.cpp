#include <iostream>
#include <vector>
#include <algorithm>
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

    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    while (left < right)
    {
        int area = (right - left) *
                   min(arr[left], arr[right]);

        maxArea = max(maxArea, area);

        if (arr[left] < arr[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << maxArea << endl;

    return 0;
}