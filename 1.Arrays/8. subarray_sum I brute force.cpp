#include <iostream>
using namespace std;

// problem: print all subarrays of a given array
// Brute force approach O(N^3)

int largestSubarraysum(int arr[], int n)
{
    int largest_sum =0;

 for (int i=0; i<n; i++)
 {
    int subarraySum =0;

    for(int j=0; j<n ; j++)
    {
        //cout << "("<< i << " , "<< j << "),"; this gonna print the loops

        for(int k =i; k<=j; k++)
        {
            subarraySum +=arr[k];
           // cout <<arr[k]<< " , ";

        }
        // put a check if subarrraySum > largest_sum

        largest_sum = max(largest_sum, subarraySum);

    }
 }
 return largest_sum;
}
int main()
{

int arr[] ={ -2,3,4,-1,5,-12,6,1,3};
int n = sizeof(arr)/sizeof(int);
// print all pairs

cout <<largestSubarraysum(arr, n)<<endl;

return 0;
}