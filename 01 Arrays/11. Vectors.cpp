#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demo Vector

    vector<int> arr = {1, 2, 10, 12, 15};

    // Vector with Fill constrctor i.e. a vector with initialized values of 7 (7,7,7,7,7,7,7,7,7)
    vector<int> arr2(10, 7);

    // Fill i.e. created a vector with visited name;
    vector<int> visited(100, 0);

    // remove the last element pop back
    arr.pop_back();

    // push_back 0(1) in constant time

    // this function insert the element at the end of the array.
    arr.push_back(16);

    // size of vector
    // cout << arr.size()<< endl;

    // Capcity of the vector

    // cout << arr.capacity()<<endl;

    // print all the elements of the vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    cout << "This is a vector with constructor" << endl;

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}