#include <iostream>
using namespace std;

int main()
{

    // each row as a string.
    // each row stored like:  o|n|e|\0
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred"};

    int i = 3;
    cout << numbers[i][1] << endl; // this wil print 'o' from forty
    cout << numbers[i] << endl;    // this will print forty

    // iterate over all rows:

    for (int j = 0; j < 6; j++)
    {
        // this will print all the rows
        cout << numbers[j] << endl;

        // this is actually address numbers[j]; numbers[j] prints entire arrays
        // cout treat character arrays diffrently
    }
    return 0;
}