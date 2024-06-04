#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    int count=0;
    bool w=false;
    for(char c:s)
    {
        if(isalpha(c))
        {
            if(w==false)
            {
                count++;
            }w=true;
            
        }
        else
            {
                w=false;
            }   
    }    
    cout<<count<<endl;
    return 0;
}