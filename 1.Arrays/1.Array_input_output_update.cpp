#include <iostream>
using namespace std;

int main()
{
int numbers[100];
int n;

cout <<"Enter the total no. ";
cin >>n;

 // input
for(int i =0; i<n; i++){
cin >> numbers[i];
}

// output
cout <<"the entered no. are: ";
for (int i=0; i<n; i++)
{
   cout <<numbers[i]<< endl; 
}

//update

int m, r;
cout <<"\n Now Enter the index you want to change and folled by its the value";

cin >> m >>r;

numbers[m] = r;

cout <<"the changed index is "<<m<<"and the corresponding value is" <<r;

cout <<" \n  the changed numbers index array would look like: \n";

for(int i=0; i<n; i++)
{
    cout <<numbers[i] <<endl;
}

// For non initialize array

cout <<"\n Here I tried to print the garbage value by increasing running the loop more than the size of array: it will print the rest of the values as garbage \n";

for(int i=0; i<10; i++)
{
 cout << numbers[i] <<endl;
    
}

cout <<"\n here the point is to make you understand that the non-initialize values are zero: if we would have declared the array size to numbers[100]";

}