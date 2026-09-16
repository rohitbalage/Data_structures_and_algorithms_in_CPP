
/*

Rotated search:

write a function that takes input as sorted array of distinct integers,
which is rotated aboutu a pivot point and finds the index of any
given element.

sample input:
[7,9,10,1,2,3,4,5,6]
element =4

sample output:
6

*/
#include <iostream>
#include <vector>
using namespace std;

// Added 'const' and '&' for efficiency
int rotated_search(const vector<int> &a, int key) {
    int n = a.size();
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // Fixed: Corrected precedence

        if (a[mid] == key) {
            return mid;
        }

        // Identify which side is sorted
        if (a[s] <= a[mid]) {
            // Left side is sorted
            if (key >= a[s] && key <= a[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            // Right side is sorted
            if (key >= a[mid] && key <= a[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }
    return -1; // Fixed: Added return for 'not found' case
}

int main() {
    // Hardcoded example for testing
    vector<int> a{4, 5, 6, 7, 0, 1, 2, 3};
    int key;
    
    cout << "Enter element to find: ";
    cin >> key;
    
    int result = rotated_search(a, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    
    return 0;
}