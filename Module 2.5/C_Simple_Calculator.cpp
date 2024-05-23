#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int num1, num2;

    cin >> num1 >> num2;

    
    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;

    // Print results
    cout << num1 << " + " << num2 << " = " << sum << endl;
    cout << num1 << " * " << num2 << " = " << product << endl;
    cout << num1 << " - " << num2 << " = " << difference << endl;

    return 0;
}
