#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Fill constructor

    vector<int> arr2(5, 7);

    // the above code will give  output: 7 7 7 7 7

    // Demo vector
    vector<int> arr = {1, 2, 3, 10, 15};

    cout << "Capacity before push: " << arr.capacity() << endl;
    // push back: inserts elements in constant time O(1)
    arr.push_back(16);
    // size of the elements (No of elements)
    cout << "Size of array (no of elements):  " << arr.size() << endl;

    // Capacity of the vector:
    cout << "Capacity after push: " << arr.capacity() << endl;

    // here the vector was fulled and now it has doubled itself hence the size is 10.

    // pop back: remove the last element

    arr.pop_back();

    // print all the elements

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}