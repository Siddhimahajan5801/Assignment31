#include <iostream>
using namespace std;

class Employee
{
public:

    int emp_code;
    char name[20];
};

class Fulltime : public Employee
{
public:

  float daily_rate;
  int no_of_days;
  double salary_1;

public:
    void inputRecord_1()
    {
        cout<<"\nEnter Employee No.  :  ";
        cin>>emp_code;
        cout<<"\nEmployee Name  :  ";
        cin>>name;
        cout<<"\nEnter Daily Rate  :  ";
        cin>>daily_rate;
        cout<<"\nEnter No. of Days  :  ";
        cin>>no_of_days;
        cout<<"\nSalary  :  ";

        salary_1 = daily_rate*no_of_days;
        cout<<salary_1<<endl;

    }

    void Display1()
    {
        cout<<"\n-------------------------\n\n";
        cout<<"Employee Number  :  "<<emp_code;
        cout<<"\nEmployee Name    :  "<<name;
        cout<<"\nSalary           :  "<<salary_1;
        cout<<"\nStatus           :  Fulltime\n";
        cout<<"--------------------------\n\n";

    }

};

class Parttime : public Employee
{
public:

    float hourly_rate;
    int no_of_hours;
    double salary_2;

public:
     void inputRecord_2()
    {
        cout<<"\nEnter Employee No.  :  ";
        cin>>emp_code;
        cout<<"\nEmployee Name  :  ";
        cin>>name;
        cout<<"\nEnter Hourly Rate  :  ";
        cin>>hourly_rate;
        cout<<"\nEnter No. of Hours  :  ";
        cin>>no_of_hours;
        cout<<"\nSalary  :  ";
        salary_2= hourly_rate*no_of_hours;
        cout<<salary_2<<endl;
    }


    void Display2()
    {
        cout<<"\n-------------------------\n\n";
        cout<<"Employee Number  :  "<<emp_code;
        cout<<"\nEmployee Name    :  "<<name;
        cout<<"\nSalary           :  "<<salary_2;
        cout<<"\nStatus           :  Parttime\n";
        cout<<"--------------------------\n\n";

    }


};

int main()
{
    Fulltime emp_ft[5];
    int i=0;
    Parttime emp_pt[5];
    int j=0;

    int choice,x;

    do
    {
    cout<<"\n1. Enter Record \n2. Display Record \n3. Search Record \n4. Quit\n\n";

    cout<<"Enter your choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:

        int time;

        cout<<"\n1. Fulltime Employee \n2. Parttime Employee \n\nEnter : ";
        cin>>time;

        switch (time)
        {
        case 1:

           emp_ft[i].inputRecord_1();
           i++;
           break;

        case 2:
            emp_pt[j].inputRecord_2();
            j++;
            break;
        }
       break;

        case 2:

            for (x=0; x<i; x++)
            {
                emp_ft[x].Display1();
            }

            for (x=0; x<j; x++)
            {
                emp_pt[x].Display2();
            }
        break;

        case 3:
            int num;
            cout<<"\nEnter Employee No.  :  ";
            cin>>num;

            for ( x=0; x<i; x++)
            {
                if (emp_ft[x].emp_code == num)
                {
                    emp_ft[x].Display1();
                }

                if (emp_pt[x].emp_code == num)
                {
                    emp_pt[x].Display2();
                }

            }
        }

    } while(choice != 4);


    return 0;
}
