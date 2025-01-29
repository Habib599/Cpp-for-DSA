#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Find max and min using comparisons
    int Max = max({a, b, c}); // Or use if-else statements
    int Min = min({a, b, c}); 

    cout << Min << " " << Max << endl;

    return 0;
}
