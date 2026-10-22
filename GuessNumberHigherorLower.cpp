
#include <iostream>
using namespace std;

int picked = 6;

int guess(int num) {
    if (num > picked)
        return -1;
    else if (num < picked)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    cin >> n;

    int low = 1;
    int high = n;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int result = guess(mid);

        if (result == 0) {
            ans = mid;
            break;
        }
        else if (result == -1) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
