#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    bool isPalindrome = true;
    int i = 0, j = n - 1;
    while (i < j) {
        if (a[i] != a[j]) {
            isPalindrome = false;
            break; 
        }
        i++;
        j--;
    }

    // Output the result
    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
