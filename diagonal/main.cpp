#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int primary_sum = 0;  // Sum of primary diagonal (top-left to bottom-right)
    int secondary_sum = 0; // Sum of secondary diagonal (top-right to bottom-left)

    for (int i = 0; i < n; i++) {
        primary_sum += arr[i][i];             // Elements where row = column
        secondary_sum += arr[i][n - 1 - i];   // Elements where column = n-1-row
    }

    return abs(primary_sum - secondary_sum);
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Matrix size must be a positive integer." << endl;
        return 1;
    }

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter " << n << " rows of " << n << " integers each:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Row " << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int result = diagonalDifference(arr);
    cout << "The absolute diagonal difference is: " << result << endl;

    return 0;
}
