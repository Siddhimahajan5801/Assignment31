#include<iostream>
using namespace std;

class Student
{
public:

    int physics;
    int chemistry;
    int maths;

public:
    void InputMarks()
    {
        cout<<"\nEnter Physics's marks   :   ";
        cin>>physics;

        cout<<"\nEnter Chemistry's marks :   ";
        cin>>chemistry;

        cout<<"\nEnter Maths's marks     :   ";
        cin>>maths;
    }

    void DisplayMarks()
    {
        cout<<endl<<"physics   =   "<<physics<<"\nchemistry =   "<<chemistry<<"\nmaths     =   "<<maths<<endl;
    }
};

class Total : public Student
{
public:
    int total;

public:
    void totalMarks()
    {
        total = physics+chemistry+maths;
    }
};

class Percentage : public Total
{
public:
    float percentage;

public:
    void percent()
    {
        percentage= total/3.0;
    }

    void displayPercent()
    {
        cout<<endl<<"Percentage = "<<percentage<<endl;
    }
};

int main()
{
    Percentage s1;

    s1.InputMarks();
    s1.DisplayMarks();

    s1.totalMarks();

    s1.percent();
    s1.displayPercent();

    return 0;
}
