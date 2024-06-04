#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;
        Person(char * n,float h,int a)
        {
            strcpy(name,n);
            height=h;
            age=a;
        }
};
Person fun()
{
    char name[100]="LEGEBD HABIB";
    Person h(name,5.11,24);
    return h;
}
int main()
{
    Person habib=fun();

    cout<<habib.name<<endl;
    cout<<habib.height<<endl;
    cout<<habib.age<<endl;
    return 0;
}