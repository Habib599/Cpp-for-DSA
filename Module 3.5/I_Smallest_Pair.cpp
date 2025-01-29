#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of elements in the array
        vector<int> A(N);

        // Input the array
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int minResult = INT_MAX;

        // Brute force: Check all pairs (i, j) with i < j
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int result = A[i] + A[j] + (j - i);
                minResult = min(minResult, result);
            }
        }

        // Output the smallest result for this test case
        cout << minResult << endl;
    }

    return 0;
}
