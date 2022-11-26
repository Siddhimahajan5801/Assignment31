#include<iostream>
using namespace std;
class B;

class A
{
protected:
    int a;

public:
    void setA(int x) {  a=x; }

    int getA() {  return a; }

    friend void swap(A *a , B *b);
};

class B
{
protected:
    int b;

public:
    void setB(int y) {  b=y; }

    int getB() { return b; }

    friend void swap(A *a , B *b );
};

void swap (A  *x , B  *y )
{
    int temp;

    temp = x->a;
    x->a = y->b;
    y->b = temp;
}

int main ()
{
    A obj1;
    B obj2;

    obj1.setA(5);
    obj2.setB(6);

    cout<<"Before Exchanging Private values \n";
    cout<<"a = "<<obj1.getA()<<endl;
    cout<<"b = "<<obj2.getB()<<endl;

    swap(&obj1, &obj2);

    cout<<"\nAfter Exchanging Private values \n";
    cout<<"a = "<<obj1.getA()<<endl;
    cout<<"b = "<<obj2.getB()<<endl;
}
