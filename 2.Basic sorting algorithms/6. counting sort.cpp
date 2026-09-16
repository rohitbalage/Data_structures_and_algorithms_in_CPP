#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int a[], int n)
{
    int largest = -1;

    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
    }

    // create a count array/ vector
    vector<int> freq(largest + 1, 0);

    for (int i = 0; i < n; i++) // : works in  O(n)
    {
        freq[a[i]]++;
    }

    // put back the elements from freq into original array

    int j = 0;
    for (int i = 0; i <= largest; i++) // order of O(n) + range
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }

    return;
}

int main()
{

    return 0;
}