#include<iostream>
#include<string.h>
using namespace std;

class Person
{
public:

    char name[20];
    int age;

public:
    void setName( char a[] )
    {
       strcpy(name , a);
    }

    char* getName()
    {
        return name;
    }

    void setAge(int x)
    {
        age=x;
    }

    int getAge()
    {
        return age;
    }
};

class Employee : public Person
{
    int empid;
    float salary;

public:
    void setEmpid( int id)
    {
        empid=id;
    }

    int getEmpid ()
    {
        return empid;
    }

    void setSalary (float rs)
    {
        salary=rs;
    }

    float getSalary()
    {
        return salary;
    }
};

int main()
{
   Employee e1;

   e1.setName("Siddhi");
   cout<<"\nName = "<<e1.getName()<<endl;

   e1.setAge(21);
   cout<<"\nAge = "<<e1.getAge()<<endl;

   e1.setEmpid(101);
   cout<<"\nEmployee's ID = "<<e1.getEmpid()<<endl;

   e1.setSalary(25000);
   cout<<"\nEmployee's Salary = "<<e1.getSalary()<<endl;



    return 0;
}
