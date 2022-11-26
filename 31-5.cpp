#include<iostream>
using namespace std;

class Item
{
public:
    int item_no;
    char name[20];
    float price;

};

class Discounted_Item : public Item
{
public:

    float discount_percent;
    float discounted_price;

public:
    void InputItem()
    {
        cout<<endl<<"Enter Item Name  :  ";
        cin>>name;
        cout<<endl<<"Enter Item No.  :  ";
        cin>>item_no;
        cout<<endl<<"Enter Item Price  :  ";
        cin>>price;
        cout<<endl<<"Enter Discount Percent  :  ";
        cin>>discount_percent;
        cout<<endl<<"--------------------------------"<<endl;
    }

    void calculateDiscount()
    {
        discounted_price = price - ( (discount_percent/100)*price );
    }

    void DisplayItem()
    {
        cout<<endl<<"Item Name  :  "<<name<<endl<<"Item no.  :  "<<item_no;
        cout<<endl<<"Item Price  :  "<<price<<endl<<"Discounted Percent  :  "<<discount_percent;
        cout<<endl<<"Discounted price "<<discounted_price;
        cout<<"\n---------------------------\n";
    }
};

int main ()
{
    int n,i;
    float total_price=0, total_discount=0;

    cout<<"How many items you want to enter?  :  ";
    cin>>n;

    Discounted_Item I[100];

    for (i=1; i<=n; i++)
    {
        I[i].InputItem();
    }

    for (i=1; i<=n; i++)
    {
        I[i].calculateDiscount();
        I[i].DisplayItem();
    }

    for (i=1; i<=n; i++)
    {
        total_price= total_price + I[i].price;
        total_discount= total_discount + (I[i].price - I[i].discounted_price );
    }

    cout<<"\nTotal Price  :  "<<total_price<<"\nTotal Discount  :  "<<total_discount<<endl;


    return 0;
}
