/*
When to create user defined copy constructor?

The compiler created copy constructor only if an object
has pointers to dynamically allocated objects, i.e a deep copy
of object is needed.

*/

#include <iostream>
#include <cstring>
using namespace std;



// product (Shopping Website)
class Product {

    private:  
    int id;  
    char *name;
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
    this->id = id;
    this->mrp=mrp;
    this->selling_price=selling_price;
    name = new char[strlen(n)+1]; // allocating // dynamic array
    strcpy(name,n);
  }

// shallow copy
  Product(Product &X)
  {
    id = X.id;
   name = new char[strlen(X.name)+1]; // Array
    strcpy(name, X.name);
    mrp = X.mrp;
    selling_price = X.selling_price;

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

void showDetails()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Id :"<<id<<endl;
    cout<<"Selling price: "<<selling_price<<endl;
    cout<<"MRP:"<<mrp<<endl;
    cout <<"--------------------------"<<endl;
}

void setName(char *name)
{
    strcpy(this->name, name);
}
    
};

int main()
{
    Product camera(101, "GoProHero9", 28000, 26000);
    Product old_camera(camera);
    old_camera.setName("GoPro8");
    old_camera.setSellingPrice(1000);
    old_camera.showDetails();
    camera.showDetails();

    /*
    shallow copy:
    we are just copying the address and not
    actual memory

    deep copy:
    we need our own copy constructor 


    
    */

    

     
}