#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    // taking input as b.
    char b[100];

    cin >> b;

    cout << b << endl;

    // char a[] = {'a', 'b', 'c', 'e', 'f', 'g', 'h'};       // this will give garbage
    //  char b[] = {'a', 'b', 'c', 'e', 'f', 'g', 'h', '\0'}; // this will not give any garbage as we initialized with null character
    char c[] = "adbceghi"; // no-error
                           //  cout << a << endl;
                           //   cout << b << endl;
    cout << c << endl;

    cout << strlen(c) << endl; // number of visible characters
    cout << sizeof(c) << endl; // +1 added null bydefault
    return 0;
}