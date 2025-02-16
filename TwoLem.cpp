#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q; // Read number of arrays and queries

    vector<vector<int>> arr(n); // Vector of vectors

    // Reading the variable-length arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; // Number of elements in the array
        arr[i].resize(k); // Resize vector to hold k elements
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j]; // Read elements into the array
        }
    }

    // Processing queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y; // Read query indices
        cout << arr[x][y] << endl; // Print the requested element
    }

    return 0;
}
