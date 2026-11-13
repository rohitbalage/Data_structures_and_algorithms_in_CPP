#include <iostream>
using namespace std;


/*
backtracking code ~ you will always find after the function call
*/

void printArray(int *arr, int n)
{
      // print our array
        for(int i =0; i< n; i++ )
        {
            cout <<arr[i] <<" ";
        }
        cout << endl;
}

void fillArray(int *arr, int i, int n, int val)
{
    // base case
    if( i ==n)
    {
       printArray(arr, n);
        return;
    }

    // rec case
    arr[i] = val;
    fillArray(arr, i+1, n, val+1);
    /* the above code will then print all the array until n*/

    /* this will print all the arrays with -1 * numbers*/
    // backtraking step
    arr[i] = -1 * arr[i];

}


int main()
{
    int arr[100];
    int n;
    cin >> n;

    fillArray(arr, 0, n, 1);
    printArray(arr,n); // this will print 2nd array in output
    return 0;
}