#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b,c;
    char s,s2;
    cin >> a >> s >> b>> s2>> c;

    if (s == '+') {
        if (a + b==c)
            cout << "Yes" << endl;
        else
            cout << a+b << endl;
    } else if (s == '-') {
        if (a - b==c)
            cout << "Yes" << endl;
        else
            cout << a-b << endl;
    } else if (s == '*') {
        if (a * b==c)
            cout << "Yes" << endl;
        else
            cout << a*b << endl;
    }
    
    return 0;
}
