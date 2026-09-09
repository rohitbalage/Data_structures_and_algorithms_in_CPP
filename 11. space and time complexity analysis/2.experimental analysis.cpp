/*

*/

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    // your code goes here:

    int n;
    cin>>n;
    vector<int> arr(n,0);

    // Init a Reverse sorted array

    for(int i=0; i<n; i++)
    {
        arr[i] = n- i;
    }

    auto start_time = clock();  // current time
    sort(arr.begin(), arr.end()); // 
    auto end_time = clock();  // end time 
    cout << end_time - start_time << endl;  // this is the time taken by algo.
    return 0;
}