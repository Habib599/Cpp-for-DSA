#include<bits/stdc++.h>
using namespace std;
int main()
{
    int * a=new int[5]; // int a[5]
    for(int i=0;i<5;i++){ //input
        cin>>a[i];
    }

    for(int i=0;i<5;i++){ //output
        cout<<a[i]<<" ";
    }
    delete[] a;
    return 0;
}