#include<iostream>
using namespace std;

class Worker
{
public:

    int code;
    char name[20];
    float salary;
};

class Officer
{
public:

    float DA;
    float HRA;
};

class Manager : public Worker, public Officer
{
public:

    float TA;
    float gross_salary;

    void InputInfo()
    {
        cout<<"-----------------------------------------\n";
        cout<<"\nEnter Code    :   ";
        cin>>code;
        cout<<"\nEnter Name    :   ";
        cin>>name;
        cout<<"\nEnter Salary  :   ";
        cin>>salary;
        cout<<"\nEnter DA      :   ";
        cin>>DA;
        cout<<"\nEnter HRA     :   ";
        cin>>HRA;
    }

    void Display()
    {
        cout<<"\n\n------------------------------------\n";
        cout<<"Manager Information \n";
        cout<<"------------------------------------\n";
        cout<<"\nCode          :      "<<code;
        cout<<"\nName          :      "<<name;
        cout<<"\nSalary        :      "<<salary;
        cout<<"\nDA            :      "<<DA;
        cout<<"\nHRA           :      "<<HRA;

        TA= 0.1*salary;
        cout<<"\nTA            :      "<<TA;

        gross_salary= salary+DA+HRA+TA;
        cout<<"\nGross Salary  :     "<<gross_salary;
    }
};

int main ()
{
    int count,i;

    cout<<"Enter Manager Count  :  ";
    cin>>count;

    Manager M[count];

    for (i=0; i<count; i++)
    {
        cout<<"\nEnter Worker Information for "<<i+1<<endl;
        M[i].InputInfo();
    }

    for (i=0; i<count; i++)
    {
        M[i].Display();
    }

    cout<<endl;

    return 0;
}


