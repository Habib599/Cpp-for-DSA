#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    int count=0;
    bool word=false;
    for(char c:s)
    {
        if(isalpha(c))
        {
            if(word==false) count++;

            word=true;
        }
        else
            word=false;
         
    }    
    cout<<count<<endl;
    return 0;
}