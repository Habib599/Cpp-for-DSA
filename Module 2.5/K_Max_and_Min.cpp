#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    // Find max and min using comparisons
    int tempMax = max({num1, num2, num3}); // Or use if-else statements
    int tempMin = min({num1, num2, num3}); 

    cout << tempMin << " " << tempMax << endl;

    return 0;
}
