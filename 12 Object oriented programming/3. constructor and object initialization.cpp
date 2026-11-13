/*
*Constructor Name = Class Name

* Called automatically when an object is created

* memory allocation happens when constructor is called

* contructor is called only once for each object.

*/

#include <iostream>
#include <cstring>
using namespace std;

class Product {

    private:  
    int id;  
    char name[100]; 
    int mrp;
    int selling_price;  
   public:
   // constructor
   Product()
   {
    cout <<" You are inside constructor";
   } 

/****************CONSTRUCTOR OVERLOADING**************************/
   // that means we have defined two constructors with same name
   // and one of them is going to be run.



    // here we can also use name[] insted of pointer. but we 
    // have to show you here that how you cna use strcpy  
  Product(int id, char *n, int mrp, int selling_price)
  {

    // this is a pointer and the next to it is a pointer
    // this.x or this->x 
    this->id = id;
    this->mrp=mrp;
    this->selling_price=selling_price;
    strcpy(name,n);
  }

   // setters: 
   void setMrp(int price)
   {
    mrp = price;
   }
   void setSellingPrice(int price)
   {
    // additional checks:

    if(price>mrp)
    {
        selling_price = mrp;
    }
    else{
        selling_price = price;
    }
   }


int getMrp()
{
  return mrp;  
}

int getSellingPrice()
{   
    
    return selling_price;
}
    
};

int main()
{
    Product camera(101, "GoProHero9", 28000, 26000);

    cout<<"MRP " << camera.getMrp()<< endl;  
    cout << "selling price " << camera.getSellingPrice() << endl; 
     
}