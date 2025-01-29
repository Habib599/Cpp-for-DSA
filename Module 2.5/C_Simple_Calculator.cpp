#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    
    int sum = a + b;
    int product = a * b;
    int difference = a - b;

    // Print results
    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << product << endl;
    cout << a << " - " << b << " = " << difference << endl;

    return 0;
}
