#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    int maxNum = -1;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (num > maxNum) 
        {
        maxNum = num;
        }
    }

    cout << maxNum << endl;

  return 0;
}
