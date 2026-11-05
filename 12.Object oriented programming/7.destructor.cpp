/*
Destructor

class
Car {
public :
/ / Destructor
~Car( ) 
}

{ 

we need destructor -> to prevent memory leaks

Function that is called Automatically when an
object is destroyed i.e. object goes out of scope or
destroyed explicitly by call to delete.
Compiler provides a default destructor.

User defined destructor is needed when class
contains pointers to dynamically allocated
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
    name = nullptr;
   }

/****************CONSTRUCTOR OVERLOADING**************************/
   // that means we have defined two constructors with same name
   // and one of them is going to be run.


    // here we can also use name[] instead of pointer. but we
    // have to show you here that how you can use strcpy
  Product(int id, const char *n, int mrp, int selling_price)
  {
    this->id = id;
    this->mrp = mrp;
    this->selling_price = selling_price;

    name = new char[strlen(n) + 1]; // allocating // dynamic array
    strcpy(name, n);
  }

// shallow copy
  Product(const Product &X)
  {
    id = X.id;
    name = new char[strlen(X.name) + 1]; // Array
    strcpy(name, X.name);
    mrp = X.mrp;
    selling_price = X.selling_price;
  }


   void operator =(const Product &X)
   {
    cout << "--inside copy assignment operator--" << endl;

    // deep copy inside copy assignment operator

    if (this == &X)
        return;

    delete[] name;

    id = X.id;
    name = new char[strlen(X.name) + 1]; // Array
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

    if(price > mrp)
    {
        selling_price = mrp;
    }
    else {
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
    cout << "Name: " << name << endl;
    cout << "Id :" << id << endl;
    cout << "Selling price: " << selling_price << endl;
    cout << "MRP:" << mrp << endl;
    cout << "--------------------------" << endl;
}

void setName(const char *name)
{
    strcpy(this->name, name);
}

~Product()
{
    cout<<"Deleting.."<<name<<endl;
    // arrays have been deleted - we needed for memory leaks when memory allocated directly
    if(name!=NULL)
    {
    delete [] name;
    name = NULL;
    }
}

};


int main()
{
    Product camera(101, "GoProHero9", 28000, 26000);
    Product old_camera;  // Constructor has been called

    old_camera = camera; // copy assignment operator

    old_camera.showDetails();

    // old_camera.setName("GoPro80old");

    camera.showDetails();

}
