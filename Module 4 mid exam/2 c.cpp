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
int main()
{
    char name[100]="LEGEND HABIB";
    Person* habib = new Person(name,5.11,24);
    
    cout<<habib->name<<endl;
    cout<<habib->height<<endl;
    cout<<habib->age<<endl;
    delete habib;
    return 0;
}