
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right) {

        // 1. Traverse left to right
        for (int j = left; j <= right; j++) {
            cout << matrix[top][j] << " ";
        }
        top++;

        // 2. Traverse top to bottom
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // 3. Traverse right to left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        // 4. Traverse bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}
