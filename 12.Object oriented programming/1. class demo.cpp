/*
 a product class that will represt a product
 for a shopping website
*/

#include <iostream>
using namespace std;

class Product {

    private:  // by default the data members are private
    int id;  // 4 byte
    char name[100];   // 100 byte
   public:
    int mrp; // 4 byte
    int selling_price;  // 4 byte

    // total 112 bytes
};

int main()
{
    Product camera;
    // selling_price <=mrp
    camera.mrp =100;
    camera.selling_price=200;

    cout <<sizeof(camera) << endl; // size of object = 112 bytes

    cout << "MRP " << camera.mrp << endl;
    cout << "Selliing Price " << camera.selling_price << endl;
}