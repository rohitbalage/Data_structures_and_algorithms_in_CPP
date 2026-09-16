#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int n)
{
      // print our array
        for(int i =0; i< n; i++ )
        {
            cout <<arr[i] <<" ";
        }
        cout << endl;
}


    // here we passed as reference : : REMEMBER WE SHARE VECTOR AS REFERENCE ACROSS ALL CALLS
void fillArray(vector<int> & arr, int i, int n, int val)
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
    vector<int> arr(100,0);
    int n;
    cin >> n;

    fillArray(arr, 0, n, 1);
    printArray(arr,n); // this will print 2nd array in output
    return 0;
}