#include<bits/stdc++.h>
using namespace std;
void fun(string& s)
{
    s="world";
}
int main()
{
    string s="hello";
    fun(s);
    cout<<s<<endl;
    return 0;
}