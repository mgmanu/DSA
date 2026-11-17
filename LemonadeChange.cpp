#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> bills(n);

    for (int i = 0; i < n; i++)
    {
        cin >> bills[i];
    }

    int five = 0;
    int ten = 0;

    for (int i = 0; i < n; i++)
    {
        if (bills[i] == 5)
        {
            five++;
        }
        else if (bills[i] == 10)
        {
            if (five > 0)
            {
                five--;
                ten++;
            }
            else
            {
                cout << "false";
                return 0;
            }
        }
        else if (bills[i] == 20)
        {
            if (ten > 0 && five > 0)
            {
                ten--;
                five--;
            }
            else if (five >= 3)
            {
                five -= 3;
            }
            else
            {
                cout << "false";
                return 0;
            }
        }
    }

    cout << "true";

    return 0;
}