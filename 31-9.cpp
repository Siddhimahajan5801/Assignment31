#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    char name[20];

};

class StudentExam : public Student
{
public:
    int subject[6];
};

class StudentResult : public StudentExam
{
public:
    float percentage;
    int total=0;

    void InputDetails()
    {
        cout<<"\n----------------------------------------------\n";
        cout<<"Enter Roll No.              :   ";
        cin>>id;
        cout<<"\nEnter Student Name          :   ";
        cin>>name;

        for (int i=0; i<6; i++)
        {
            cout<<"\nEnter Marks for Subject "<<i+1<<"   :   ";
            cin>>subject[i];
        }
    }

    void DisplayResult()
    {
        cout<<"\n----------------------------------------------";
        cout<<"\n********* Student Marklist *****************";
        cout<<"\n----------------------------------------------";
        cout<<"\nRoll No.        :     "<<id;
        cout<<"\nStudent Name    :     "<<name<<endl;

        for (int i=0; i<6; i++)
        {
            cout<<"\nMarks of Subject "<<i+1<<"  :   "<<subject[i];
            total=total+subject[i];
        }

        percentage=total/6.0;

        cout<<"\n\nTotal Percentage :     "<<percentage;
        cout<<"\n-----------------------------------------------\n";
    }
};

int main ()
{
    int n;
    cout<<"Enter No. of students You want?  :  ";
    cin>>n;

    StudentResult S[n];

    for (int i=0; i<n; i++)
    {
        S[i].InputDetails();
    }
    for (int i=0; i<n; i++)
    {
        S[i].DisplayResult();
    }

    return 0;
}
