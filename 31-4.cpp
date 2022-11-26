#include<iostream>
#include<string.h>
using namespace std;

class Person
{
public:

    char name[20];
    char address[20];
    long long phone_no;
};


class Employee : public Person
{
public:
    int eno;
    char ename[20];
};


class Manager : public Employee
{
public:
    char designation[20];
    char department_name[20];
    double salary;

public:
    void inputData()
    {
        cout<<"\nEnter Details of Manager\n";
        cout<<"------------------------------\n";
        cout<<"Employee No. :  ";
        cin>>eno;
        cout<<"\nEnter Name  :  ";
        cin>>name;
        cout<<"\nEnter Address  :  ";
        cin>>address;
        cout<<"\nEnter phone No.  :  ";
        cin>>phone_no;
        cout<<"\nEnter Designation  :  ";
        cin>>designation;
        cout<<"\nEnter Department Name  :  ";
        cin>>department_name;
        cout<<"\nEnter Basic Salary  :  ";
        cin>>salary;
    }
};

int main ()
{
    int n;

    cout<<"How many Managers You Want to Enter : ";
    cin>>n;

    Manager m[100];

    for (int i=1; i<=n; i++)
    {
       m[i].inputData();
    }

     int temp=0;

     for (int i=1; i<=n; i++)
     {
         if (m[i].salary>m[temp].salary)
            temp=i;
     }

     cout<<"\nManager with the Highest salary is  :  "<<m[temp].salary;
     cout<<"\nAnd , Manager Name is  :  "<<m[temp].name;
     cout<<endl;

    return 0;

}
