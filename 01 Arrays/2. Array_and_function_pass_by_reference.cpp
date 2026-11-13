#include <iostream>
using namespace std;


void printArray(int  *arr, int n )
{
  cout <<"Size In Function " <<sizeof(arr)<<endl;

    cout <<"no of elements inside function is "<<n<<endl;

arr[0] = 100;

   for(int i =0; i <n ; i++)
    {
        cout << arr[i]<<endl;
    }

    

}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/ sizeof(int);

   printArray(arr, n); 
        
    cout <<"Size In main " <<sizeof(arr) <<endl;
      //call function and ask to print size
    cout <<"no of elements inside main is "<<n<<endl;

    for(int i =0; i <n ; i++)
    {
        cout << arr[i]<<endl;
    }



    return 0;
}