#include <iostream>
using namespace std;

int firstBad = 4;

bool isBadVersion(int version) {
    return version >= firstBad;
}

int main() {
    int n;
    cin >> n;

    int low = 1;
    int high = n;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isBadVersion(mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << ans;

    return 0;
}