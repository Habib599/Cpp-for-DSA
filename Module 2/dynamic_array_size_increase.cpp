#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];
    for(int i=0;i<5;i++) {// input a
        cin>>a[i];
    }
    int *b=new int[7];
    for(int i=0;i<5;i++)// swap  b = a
    {
        b[i]=a[i];
    }
    b[5]=60;
    b[6]=70;

    for(int i=0;i<7;i++){// output b
        cout<<b[i]<<" ";
    }

    cout<<endl;
    // delete a array
    delete[] a;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}