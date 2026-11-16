#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> g(n);

    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }

    cin >> m;

    vector<int> s(m);

    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    }

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (s[j] >= g[i])
        {
            i++;
        }

        j++;
    }

    cout << i << endl;

    return 0;
}