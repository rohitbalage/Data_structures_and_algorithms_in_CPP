#include <iostream>
using namespace std;

// problem: print all subarrays of a given array
// Brute force approach O(N^3)

int largestSubarraysum1(int arr[], int n)
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


// Prefix Sum approach

int largestSubarraysum2(int arr[], int n)
{
    // prefix Sums
    int prefix[100] = {0};
    prefix [0] = arr[0];

    for (int i=1; i<n; i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }


    // largest sum logic we have here:

    int largest_sum =0;

 for (int i=0; i<n; i++)
 {
    for(int j=0; j<n ; j++)
    {
        int subarraySum = i >0  ? prefix[j]- prefix[i-1] : prefix[j] ;
        // put a check is subarraySum > largest sum
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

cout <<largestSubarraysum1(arr, n)<<endl;

cout <<largestSubarraysum2(arr, n)<<endl;

return 0;
}