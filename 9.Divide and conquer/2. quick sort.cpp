#include <iostream>
#include <vector>
using namespace std;

/*

the quick sort algorithm:

1. choose the pivot  [choose last element as pivot]

2. partition step [you try to partition array into two parts]

3. recursivly sort left and right part of array [call quick sort again]

4.
*/

int partition(vector<int> &a, int s, int e) {
    int pivot = a[e]; 
    int i = s - 1;

    // Fixed: Loop condition should check 'j', not 'i'
    for (int j = s; j < e; j++) { 
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    // Place the pivot in its correct sorted position
    swap(a[i + 1], a[e]);
    return i + 1;
}

void quicksort(vector<int> &a, int s, int e) {
    if (s >= e) {
        return;
    }

    int p = partition(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
}

int main() {
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}