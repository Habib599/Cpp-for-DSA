#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++) 
    {
            string S, X;
            getline(cin, S, ' ');
            getline(cin, X);

            size_t pos = S.find(X);
            
            while (pos != string::npos) 
            {
                
                S.replace(pos, X.length(), "$");
                pos = S.find(X, pos + 1);
            }
            cout << S << endl;
    }

    return 0;
}