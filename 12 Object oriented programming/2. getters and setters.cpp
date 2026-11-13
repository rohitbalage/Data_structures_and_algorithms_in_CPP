/*
demo for getters and setters:

*/

#include <iostream>
using namespace std;

class Product {

    private:  
    int id;  
    char name[100]; 
    int mrp;
    int selling_price;  
   public:

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
    Product camera;
    // // selling_price <=mrp
    // camera.mrp =100;
    // camera.selling_price=200;

    camera.setMrp(100);
    camera.setSellingPrice(190);

    cout <<sizeof(camera) << endl; // size of object = 112 bytes 
    cout<<"MRP " << camera.getMrp()<< endl;  
    cout << "selling price " << camera.getSellingPrice() << endl; 
     
}