#include<iostream>
using namespace std;

class Base
{
public:
    int a;
    int b;

public:
    void inputData()
    {
        cout<<"Enter a and b :"<<endl;
        cin>>a>>b;
    }

    void Display()
    {
        cout<<endl<<"a = "<<a<<"   b = "<<b<<endl;
    }
};

class Derived : public Base
{
public:
    int sum;

public:
    void sumData()
       {
           sum = a+b;
       }
    void DisplaySum()
    {
         cout<<endl<<endl<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
    }
};

int main ()
{
    class Derived d1;

    d1.inputData();
    d1.Display();

    d1.sumData();
    d1.DisplaySum();


    return 0;
}
