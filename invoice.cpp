#include <iostream>

using namespace std;
class Invoice
{

private:
   string part_number;
   string part_description;
    int quantity;
    double price;
public:
    Invoice()
       {

        part_number = "a1" ;
        part_description="hardware";
        quantity = 3;
        price = 500;
       }
       void set_part_number(string part_number)
       {
           part_number=part_number;
       }

       void set_part_description(string description)
       {
          part_description=description;
       }
       void set_quantity(int x)
       {
          quantity=x;
          if(quantity<0)
          {
              quantity=0;
          }
       }
       void set_price(int y)
       {
            price=y;
            if(price<0)
            {
                price=0;
            }
       }
     string get_part_number()
       {
           return part_number;
       }
        string get_part_description()
       {
           return part_description;
       }
        int get_quantity()
       {
           return quantity;
       }
         double get_price()
       {
           return price;
       }
       int getInvoiceAccount()
       {price=price*quantity;
          return price;

       }
};
int main()
{    Invoice boss1,boss2;
     boss1.set_part_description("ok");
     boss1.set_part_number("A10");
     boss1.set_price(100);
     boss1.set_quantity(6);
    cout<< boss1.get_part_description()<<endl;
    cout<< boss1.get_part_number()<<endl;
     cout<<boss1.get_price()<<endl;
     cout<<boss1.get_quantity()<<endl;
    cout<< boss1.getInvoiceAccount()<<endl;


    return 0;
}
