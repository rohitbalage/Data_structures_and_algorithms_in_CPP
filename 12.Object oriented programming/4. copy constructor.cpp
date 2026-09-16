/*
copy constructor:

creates a copy of given object
initialize an object using another object 
of the same class

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

  // here we are making copy constructor 
  // this will override the webcam in main
  // if is empty it will print garbge
  Product(Product &X)
  {
    // create to thecopy
    id = X.id;
   // name = X.name;
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
    
};

int main()
{
    Product camera(101, "GoProHero9", 28000, 26000);

    // copy is made using a special contructor -> copy constructor
    Product webcam(camera);
    Product handyCam = camera;
    camera.showDetails();
    webcam.showDetails();
    handyCam.showDetails();
    
    /* All the properties of camera 1 is copied inside camera 2*/

     
}