#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string name,int age,int marks1,int marks2)
        {
            this->name=name;
            this->age=age;
            this->marks1=marks1;
            this->marks2=marks2;
        }
        void hello()
        {
            cout<<name<< " " <<age<<endl;
        }
        void total_marks()
        {
            cout<< "Marks : " <<marks1+marks2<<endl;
        }
};
int main()
{
    Person rakib("Rakib Ahsan",24,95,85);
    cout<<rakib.name<<endl;
    rakib.hello();
    rakib.total_marks();
    return 0;
}