#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Input the string

    string to_replace = "EGYPT";
    string replacement = " ";

    size_t pos = 0;
    // Replace all occurrences of "EGYPT" with space
    while ((pos = s.find(to_replace, pos)) != string::npos) {
        s.replace(pos, to_replace.length(), replacement);
        pos += replacement.length(); // Move past the replacement
    }

    cout << s << endl; // Output the result
    return 0;
}
