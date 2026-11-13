#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()

{

    int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr) / sizeof(int);

    /*
     sort function arr- from where you have to start: arr, [s,e)    arr+n : start till end.

    */
    sort(arr, arr + n);
    sort(arr, arr + n, compare); // we are passing function a parameter to another function

    // this one is also another option:
    sort(arr, arr + n, greater<int>());
    // reverse(arr, arr + n); // this will reverse the array
    // print the output

    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << " \n "
         << "this will change the position from comparator function \n";
    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << " \n "
         << "this will change the position using greater function \n";

    return 0;
}