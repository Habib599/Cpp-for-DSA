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

    char name1[100]="RIAZ";
    Person* riaz = new Person(name1,5.6,23);
    
     if (habib->age > riaz->age) {
        cout << habib->name <<endl;
    } else if (riaz->age > habib->age) {
        cout << riaz->name <<endl;
    } else {
        cout << "Same age" <<endl;
    }
    delete habib;
    delete riaz;
    return 0;
}