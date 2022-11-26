#include<iostream>
using namespace std;

class Customer
{
public:
    char name[20];
    long long phone_no;


};

class Depositor : public Customer
{
public:
    long long acc_no;
    double balance;

};

class Borrower : public Depositor
{
public:
    int loan_no;
    double loan_amt;

    void inputDetails()
    {
        cout<<"\nEnter Customer Name        :  ";
        cin>>name;
        cout<<"\nEnter Customer Phone No.   :  ";
        cin>>phone_no;
        cout<<"\nEnter Customer A/c No      :  ";
        cin>>acc_no;
        cout<<"\nEnter Balance              :   ";
        cin>>balance;
        cout<<"\nEnter Loan No.             :  ";
        cin>>loan_no;
        cout<<"\nEnter Loan Amount          :  ";
        cin>>loan_amt;
        cout<<"\n-------------------------------------------\n";
    }

    void Display ()
    {
        cout<<"\nDetails of Customer \n\n";
        cout<<"--------------------------------------------\n\n";
        cout<<"Customer Name        :   "<<name;
        cout<<"\nCustomer Phone No.   :   "<<phone_no;
        cout<<"\nCustomer A/c No      :   "<<acc_no;
        cout<<"\nBalance              :   "<<balance;
        cout<<"\n--------------------------------------------\n";
        cout<<"\nLoan No              :   "<<loan_no;
        cout<<"\nLoan Amount          :   "<<loan_amt;
        cout<<"\n--------------------------------------------\n\n";

    }

};

int main ()
{
    int n,i;
    cout<<"Enter No. of Customer Details You want : ";
    cin>>n;

    Borrower person[n];

    for (i=0; i<n; i++)
    {
        person[i].inputDetails();
    }
    for (i=0; i<n; i++)
    {
        person[i].Display();
    }

    return 0;
}
