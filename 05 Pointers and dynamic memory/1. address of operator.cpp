#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 5.5;
    cout << &x << endl; // these address are just 4 bytes aways x & y
    cout << &y << endl;

    return 0;
}