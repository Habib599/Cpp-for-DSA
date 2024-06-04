#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string world;
    ss>>world;
    reverse(world.begin(),world.end());
        cout<<world;
    while (ss>>world)
    {
        reverse(world.begin(),world.end());
        cout<<' '<<world;
    }
    return 0;
}